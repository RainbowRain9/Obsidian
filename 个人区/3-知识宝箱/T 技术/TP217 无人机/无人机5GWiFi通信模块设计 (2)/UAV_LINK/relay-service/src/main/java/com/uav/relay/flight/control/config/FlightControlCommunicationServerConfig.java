package com.uav.relay.flight.control.config;

import com.uav.relay.flight.control.handler.FlightControlServerInitializer;
import io.netty.bootstrap.ServerBootstrap;
import io.netty.channel.ChannelOption;
import io.netty.channel.nio.NioEventLoopGroup;
import io.netty.channel.socket.nio.NioServerSocketChannel;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.SpringBootConfiguration;
import org.springframework.boot.context.properties.ConfigurationProperties;
import org.springframework.context.annotation.Bean;

import java.net.InetSocketAddress;
import java.util.HashMap;
import java.util.Map;
import java.util.Set;

@SpringBootConfiguration
@ConfigurationProperties(prefix = "fc.server")
public class FlightControlCommunicationServerConfig {


    private String ip;

    private int port;

    private int bossCount;

    private int workerCount;

    private boolean keepAlive;

    private int backlog;

    public int getPort() {
        return port;
    }

    public void setPort(int port) {
        this.port = port;
    }

    public int getBossCount() {
        return bossCount;
    }

    public void setBossCount(int bossCount) {
        this.bossCount = bossCount;
    }

    public int getWorkerCount() {
        return workerCount;
    }

    public void setWorkerCount(int workerCount) {
        this.workerCount = workerCount;
    }

    public boolean isKeepAlive() {
        return keepAlive;
    }

    public void setKeepAlive(boolean keepAlive) {
        this.keepAlive = keepAlive;
    }

    public int getBacklog() {
        return backlog;
    }

    public void setBacklog(int backlog) {
        this.backlog = backlog;
    }

    public String getIp() {
        return ip;
    }

    public void setIp(String ip) {
        this.ip = ip;
    }

    @Autowired
    private FlightControlServerInitializer flightControlServerInitializer;

    @Bean(name = "flightControlServerBootstrap")
    public ServerBootstrap bootstrap() {
        ServerBootstrap b = new ServerBootstrap();
        b.group(bossGroup(), workerGroup())
                .channel(NioServerSocketChannel.class)
                .childHandler(flightControlServerInitializer);
        Map<ChannelOption<?>, Object> channelOptions = channelOptions();
        Set<ChannelOption<?>> keySet = channelOptions.keySet();
        for (ChannelOption option : keySet) {
            //noinspection unchecked
            b.option(option, channelOptions.get(option));
        }
        return b;
    }

    @Bean(name = "flightControlServerChannelOptions")
    public Map<ChannelOption<?>, Object> channelOptions() {
        Map<ChannelOption<?>, Object> options = new HashMap<>();
        options.put(ChannelOption.SO_BACKLOG, backlog);
        return options;
    }

    @Bean(name = "flightControlServerInetSocketAddress")
    public InetSocketAddress inetSocketAddress() {
        return new InetSocketAddress(ip, port);
    }

    @Bean(name = "flightControlServerBossGroup", destroyMethod = "shutdownGracefully")
    public NioEventLoopGroup bossGroup() {
        return new NioEventLoopGroup(bossCount);
    }

    @Bean(name = "flightControlServerWorkerGroup", destroyMethod = "shutdownGracefully")
    public NioEventLoopGroup workerGroup() {
        return new NioEventLoopGroup(workerCount);
    }


}
