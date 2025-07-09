package com.uav.telem.communication.rxtx.fc;

import com.uav.telem.communication.conf.TelemCommunicationConfig;
import com.uav.telem.communication.service.BidirectionalService;
import io.netty.bootstrap.Bootstrap;
import io.netty.channel.Channel;
import io.netty.channel.ChannelFuture;
import io.netty.channel.ChannelInitializer;
import io.netty.channel.ChannelPipeline;
import io.netty.channel.oio.OioEventLoopGroup;
import io.netty.channel.rxtx.RxtxChannel;
import io.netty.channel.rxtx.RxtxChannelConfig;
import io.netty.channel.rxtx.RxtxDeviceAddress;
import io.netty.handler.logging.LogLevel;
import io.netty.handler.logging.LoggingHandler;

@SuppressWarnings("deprecation")
public class FlightControlRxtxCommunicationClient implements Runnable {


    private BidirectionalService bidirectionalService;

    private TelemCommunicationConfig telemCommunicationConfig;

    public FlightControlRxtxCommunicationClient(BidirectionalService bidirectionalService, TelemCommunicationConfig telemCommunicationConfig) {
        this.bidirectionalService = bidirectionalService;
        this.telemCommunicationConfig = telemCommunicationConfig;
    }

    @Override
    public void run() {

        Bootstrap bootstrap = new Bootstrap();

        OioEventLoopGroup eventExecutors = new OioEventLoopGroup(20);
        bootstrap.group(eventExecutors);
        bootstrap.channel(RxtxChannel.class);
        bootstrap.handler(new ChannelInitializer<RxtxChannel>() {

            @Override
            protected void initChannel(RxtxChannel rxtxChannel) throws Exception {
                rxtxChannel.config().setBaudrate(57600)
                        .setDatabits(RxtxChannelConfig.Databits.DATABITS_8)
                        .setStopbits(RxtxChannelConfig.Stopbits.STOPBITS_1)
                        .setParitybit(RxtxChannelConfig.Paritybit.NONE)
                        .setReadTimeout(15);

                ChannelPipeline pipeline = rxtxChannel.pipeline();
                pipeline.addLast(new LoggingHandler(LogLevel.DEBUG));

                pipeline.addLast(new FlightControlRxtxClientChannel(bidirectionalService));
            }
        });

        Channel channel = null;
        try {
            ChannelFuture f = bootstrap.connect(new RxtxDeviceAddress(telemCommunicationConfig.getFcRxtx())).sync();
            channel = f.channel();
            f.channel().closeFuture().sync();
        } catch (Exception e) {
            e.printStackTrace();
        }finally {
            eventExecutors.shutdownGracefully();
//            connectDespatcher.putConnectType(FlightControlCommunicationClientConfig.ACTIVE_FIVE_G);
        }
    }


}
