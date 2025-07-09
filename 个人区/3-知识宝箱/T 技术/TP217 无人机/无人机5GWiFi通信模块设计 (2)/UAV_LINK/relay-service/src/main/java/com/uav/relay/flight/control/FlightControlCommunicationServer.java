package com.uav.relay.flight.control;

import io.netty.bootstrap.ServerBootstrap;
import io.netty.channel.Channel;
import jakarta.annotation.PostConstruct;
import lombok.extern.slf4j.Slf4j;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Qualifier;
import org.springframework.stereotype.Component;

import java.net.InetSocketAddress;

@Slf4j
@Component
public class FlightControlCommunicationServer implements Runnable{


    @Autowired
    @Qualifier("flightControlServerBootstrap")
    private ServerBootstrap serverBootstrap;

    @Autowired
    @Qualifier("flightControlServerInetSocketAddress")
    private InetSocketAddress inetSocketAddress;


    private Channel serverChannel;

    @Override
    public void run() {
        try {
            serverChannel = serverBootstrap.bind(inetSocketAddress).sync().channel().closeFuture().sync().channel();
        } catch (InterruptedException e) {
            log.error("ground station tcp server 开启失败:{}", e.getLocalizedMessage());
        }
    }

    @PostConstruct
    public void start(){
        new Thread(this).start();
    }
}
