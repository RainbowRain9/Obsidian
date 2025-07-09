package com.uav.relay.flight.control.handler;

import com.uav.relay.service.BidirectionalService;
import io.netty.channel.Channel;
import io.netty.channel.ChannelInitializer;
import io.netty.channel.ChannelPipeline;
import io.netty.handler.logging.LogLevel;
import io.netty.handler.logging.LoggingHandler;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Component;

@Component
public class FlightControlServerInitializer  extends ChannelInitializer<Channel> {

    @Autowired
    private BidirectionalService bidirectionalService;

    @Override
    protected void initChannel(Channel channel) throws Exception {
        ChannelPipeline pipeline = channel.pipeline();
        pipeline.addLast(new LoggingHandler(LogLevel.DEBUG));
        pipeline.addLast(new FlightControDataHandler(bidirectionalService));
    }
}
