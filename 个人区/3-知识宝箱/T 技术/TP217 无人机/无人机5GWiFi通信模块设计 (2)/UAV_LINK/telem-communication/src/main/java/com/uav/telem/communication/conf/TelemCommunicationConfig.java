package com.uav.telem.communication.conf;

import org.springframework.boot.SpringBootConfiguration;
import org.springframework.boot.context.properties.ConfigurationProperties;

import java.util.concurrent.CountDownLatch;

@SpringBootConfiguration
@ConfigurationProperties(prefix = "telem")
public class TelemCommunicationConfig {


    private CountDownLatch fifthConnectCountDownLatch = new CountDownLatch(1);

    private String fifthTransparentMode;

    private String fifthRxtx;
    private String fcRxtx;

    public String getFifthRxtx() {
        return fifthRxtx;
    }

    public void setFifthRxtx(String fifthRxtx) {
        this.fifthRxtx = fifthRxtx;
    }

    public String getFcRxtx() {
        return fcRxtx;
    }

    public void setFcRxtx(String fcRxtx) {
        this.fcRxtx = fcRxtx;
    }


    public CountDownLatch getFifthConnectCountDownLatch() {
        return fifthConnectCountDownLatch;
    }

    public String getFifthTransparentMode() {
        return fifthTransparentMode;
    }

    public void setFifthTransparentMode(String fifthTransparentMode) {
        this.fifthTransparentMode = fifthTransparentMode;
    }
}
