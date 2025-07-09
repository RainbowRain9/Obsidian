package com.uav.relay.service.impl;

import com.uav.relay.service.BidirectionalService;
import io.netty.buffer.ByteBuf;
import io.netty.buffer.Unpooled;
import io.netty.channel.Channel;
import lombok.extern.slf4j.Slf4j;
import org.springframework.stereotype.Service;


@Slf4j
@Service
public class BidirectionalServiceImpl implements BidirectionalService {

    private Channel flightControlChannel;

    private Channel groundStationChannel;


    @Override
    public void sendDataToFlightControl(byte[] data){
        if(flightControlChannel != null && flightControlChannel.isActive()){
            ByteBuf byteBuf = Unpooled.copiedBuffer(data);
            flightControlChannel.writeAndFlush(byteBuf);
        }
    }

    @Override
    public void sendDataToGroundStation(byte[] data){
        if(groundStationChannel != null && groundStationChannel.isActive()){
            ByteBuf byteBuf = Unpooled.copiedBuffer(data);
            groundStationChannel.writeAndFlush(byteBuf);
        }
    }


    public void setFlightControlChannel(Channel flightControlChannel) {
        this.flightControlChannel = flightControlChannel;
    }

    public void setGroundStationChannel(Channel groundStationChannel) {
        this.groundStationChannel = groundStationChannel;
    }
}
