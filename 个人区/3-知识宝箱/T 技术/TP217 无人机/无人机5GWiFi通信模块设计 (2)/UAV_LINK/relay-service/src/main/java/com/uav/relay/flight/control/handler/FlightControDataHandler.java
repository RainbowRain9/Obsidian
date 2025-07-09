package com.uav.relay.flight.control.handler;

import com.uav.relay.service.BidirectionalService;
import io.netty.buffer.ByteBuf;
import io.netty.channel.ChannelHandlerContext;
import io.netty.channel.SimpleChannelInboundHandler;
import lombok.extern.slf4j.Slf4j;

import java.util.Arrays;

@Slf4j
public class FlightControDataHandler extends SimpleChannelInboundHandler<ByteBuf> {

    private BidirectionalService bidirectionalService;

    public FlightControDataHandler(BidirectionalService bidirectionalService) {
        this.bidirectionalService = bidirectionalService;
    }


    @Override
    public void channelActive(ChannelHandlerContext ctx) throws Exception {
        bidirectionalService.setFlightControlChannel(ctx.channel());
    }

    @Override
    protected void channelRead0(ChannelHandlerContext channelHandlerContext, ByteBuf in) throws Exception {
        int length = in.readableBytes();
        byte[] data = new byte[length];
        in.readBytes(data);
        log.debug("接收到数据:长度:{},数据:{}", length, Arrays.toString(data));
        bidirectionalService.sendDataToGroundStation(data);
    }
}
