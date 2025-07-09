package com.uav.telem.communication.rxtx.fifth;

import com.uav.telem.communication.service.BidirectionalService;
import io.netty.buffer.ByteBuf;
import io.netty.channel.ChannelHandlerContext;
import io.netty.channel.SimpleChannelInboundHandler;
import lombok.extern.slf4j.Slf4j;

import java.util.Arrays;

@Slf4j
public class FifthRxtxClientHandler extends SimpleChannelInboundHandler<ByteBuf> {

    private BidirectionalService bidirectionalService;

    public FifthRxtxClientHandler(BidirectionalService bidirectionalService) {
        this.bidirectionalService = bidirectionalService;
    }



    @Override
    public void channelActive(ChannelHandlerContext ctx) throws Exception {
        log.debug("5G串口active");
        bidirectionalService.setFifthRxtxCommunicationClientChannel(ctx.channel());
    }


    @Override
    public void channelUnregistered(ChannelHandlerContext ctx) throws Exception {
        super.channelUnregistered(ctx);
    }

    @Override
    public void channelInactive(ChannelHandlerContext ctx) throws Exception {
        log.debug("5G串口 inactive");
    }

    @Override
    protected void channelRead0(ChannelHandlerContext channelHandlerContext, ByteBuf in) throws Exception {
        int length = in.readableBytes();
        byte[] data = new byte[length];
        in.readBytes(data);
        log.debug("5G串口接收到数据:长度:{},数据:{}", length, Arrays.toString(data));
        bidirectionalService.sendDataToFlightControl(data);
    }
}
