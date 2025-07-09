package com.uav.telem.communication.service;

import io.netty.channel.Channel;

public interface BidirectionalService {
    void setFlightControlRxtxCommunicationClientChannel(Channel channel);
    void setFifthRxtxCommunicationClientChannel(Channel channel);

    void sendDataToFifth(byte[] data);
    void sendDataToFlightControl(byte[] data);

    void sendFifthTransparentModeMessage();

    void fifthConnectCountDown();
}
