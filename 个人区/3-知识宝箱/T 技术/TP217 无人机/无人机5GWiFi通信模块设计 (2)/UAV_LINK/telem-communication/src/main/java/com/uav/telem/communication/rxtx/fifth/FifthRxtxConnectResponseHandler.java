package com.uav.telem.communication.rxtx.fifth;

import com.uav.telem.communication.service.BidirectionalService;
import io.netty.buffer.ByteBuf;
import io.netty.channel.ChannelHandlerContext;
import io.netty.channel.ChannelPipeline;
import io.netty.channel.SimpleChannelInboundHandler;
import lombok.extern.slf4j.Slf4j;

import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;

@Slf4j
public class FifthRxtxConnectResponseHandler  extends SimpleChannelInboundHandler<ByteBuf> {

    private BidirectionalService bidirectionalService;


    public FifthRxtxConnectResponseHandler(BidirectionalService bidirectionalService) {
        this.bidirectionalService = bidirectionalService;
    }

    @Override
    public void channelActive(ChannelHandlerContext ctx) throws Exception {
        log.debug("5G串口active");
        bidirectionalService.setFifthRxtxCommunicationClientChannel(ctx.channel());
        bidirectionalService.sendFifthTransparentModeMessage();

        new Thread(() -> {
            try {
                Thread.sleep(1000);
                bidirectionalService.sendFifthTransparentModeMessage();
            } catch (InterruptedException e) {
                throw new RuntimeException(e);
            }
        }).start();

        new Thread(() -> {
            try {
                Thread.sleep(2000);
                bidirectionalService.sendFifthTransparentModeMessage();
            } catch (InterruptedException e) {
                throw new RuntimeException(e);
            }
        }).start();


    }

    @Override
    protected void channelRead0(ChannelHandlerContext ctx, ByteBuf byteBuf) throws Exception {
        int length = byteBuf.readableBytes();
        byte[] stringBytes = new byte[length];
        byteBuf.readBytes(stringBytes);
        String string = new String(stringBytes, StandardCharsets.UTF_8);
        log.debug("接收到5g模块响应:{}", string);
        if(string.toLowerCase().contains("connect")){
            log.debug("已接收到5g模块connect");
            bidirectionalService.fifthConnectCountDown();

            ChannelPipeline pipeline = ctx.pipeline();
            pipeline.remove(this);
            pipeline.addLast(new FifthRxtxClientHandler(bidirectionalService));
            log.debug("已添加5g数据传输handler");

        }else{
            log.warn("5g模块响应数据:{}", string);

            bidirectionalService.fifthConnectCountDown();
            ChannelPipeline pipeline = ctx.pipeline();
            pipeline.remove(this);
            pipeline.addLast(new FifthRxtxClientHandler(bidirectionalService));
        }


    }
}
