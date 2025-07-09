package com.uav.relay.service;

import io.netty.channel.Channel;

public interface BidirectionalService {

    void sendDataToFlightControl(byte[] data);

    void sendDataToGroundStation(byte[] data);

    void setFlightControlChannel(Channel flightControlChannel) ;

    void setGroundStationChannel(Channel groundStationChannel) ;
}
