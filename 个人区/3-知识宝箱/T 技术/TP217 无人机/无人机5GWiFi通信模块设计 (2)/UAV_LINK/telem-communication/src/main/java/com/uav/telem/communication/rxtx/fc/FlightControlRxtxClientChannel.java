package com.uav.telem.communication.rxtx.fc;

import com.uav.telem.communication.service.BidirectionalService;
import io.netty.buffer.ByteBuf;
import io.netty.channel.ChannelHandlerContext;
import io.netty.channel.SimpleChannelInboundHandler;
import lombok.extern.slf4j.Slf4j;

import java.util.Arrays;

@Slf4j
public class FlightControlRxtxClientChannel extends SimpleChannelInboundHandler<ByteBuf> {

    private BidirectionalService bidirectionalService;

    public FlightControlRxtxClientChannel(BidirectionalService bidirectionalService) {
        this.bidirectionalService = bidirectionalService;
    }


    @Override
    public void channelActive(ChannelHandlerContext ctx) throws Exception {
        log.debug("飞控串口active");
        bidirectionalService.setFlightControlRxtxCommunicationClientChannel(ctx.channel());
    }


    @Override
    public void channelUnregistered(ChannelHandlerContext ctx) throws Exception {
        super.channelUnregistered(ctx);
    }

    @Override
    public void channelInactive(ChannelHandlerContext ctx) throws Exception {
        log.debug("飞控串口 inactive");
    }

    @Override
    protected void channelRead0(ChannelHandlerContext channelHandlerContext, ByteBuf in) throws Exception {
        int length = in.readableBytes();
        byte[] data = new byte[length];
        in.readBytes(data);
        log.debug("飞控串口接收到数据:长度:{},数据:{}", length, Arrays.toString(data));
        bidirectionalService.sendDataToFifth(data);
    }
}
