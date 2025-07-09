package com.uav.telem.communication.service.impl;

import com.uav.telem.communication.conf.TelemCommunicationConfig;
import com.uav.telem.communication.service.BidirectionalService;
import io.netty.buffer.ByteBuf;
import io.netty.buffer.Unpooled;
import io.netty.channel.Channel;
import lombok.extern.slf4j.Slf4j;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;

@Slf4j
@Service
public class BidrectionalServiceImpl implements BidirectionalService {


    private Channel fifthChannel;

    private Channel flightControlChannel;

    @Autowired
    private TelemCommunicationConfig telemCommunicationConfig;

    @Override
    public void setFlightControlRxtxCommunicationClientChannel(Channel channel) {
        this.flightControlChannel = channel;
    }

    @Override
    public void setFifthRxtxCommunicationClientChannel(Channel channel) {
        this.fifthChannel = channel;
    }

    @Override
    public void sendDataToFifth(byte[] data) {
        if(fifthChannel != null && fifthChannel.isActive()){
            ByteBuf byteBuf = Unpooled.copiedBuffer(data);
            fifthChannel.writeAndFlush(byteBuf);
        }
    }

    @Override
    public void sendDataToFlightControl(byte[] data) {
        if(flightControlChannel == null){
            log.warn("flightControlChannel 为null");
        }else {
            if(flightControlChannel.isActive()){
                ByteBuf byteBuf = Unpooled.copiedBuffer(data);
                flightControlChannel.writeAndFlush(byteBuf);
                log.debug("已经将5g模块数据发送给飞控,数据长度:{}", data.length);
            }else{
                log.warn("flightControlChannel active状态:{}", flightControlChannel.isActive());
            }
        }


    }

    @Override
    public void sendFifthTransparentModeMessage() {
        if(fifthChannel != null && fifthChannel.isActive()){
            String fifthTransparentMode = telemCommunicationConfig.getFifthTransparentMode();
            byte[] fifthTransparentModeBytes = fifthTransparentMode.getBytes(StandardCharsets.UTF_8);

            ByteBuf byteBuf = Unpooled.buffer();

            byte[] newlineBytes = new byte[]{(byte)0x0d,(byte)0x0d,(byte)0x0a};

            byteBuf.writeBytes(fifthTransparentModeBytes);
            byteBuf.writeBytes(newlineBytes);

            fifthChannel.writeAndFlush(byteBuf);
        }
    }

    @Override
    public void fifthConnectCountDown() {
        telemCommunicationConfig.getFifthConnectCountDownLatch().countDown();
        log.debug("已设置fifthConnectCountDown -1");
    }

}
