package com.uav.telem.communication.despatcher;


import com.uav.telem.communication.conf.TelemCommunicationConfig;
import com.uav.telem.communication.rxtx.fc.FlightControlRxtxCommunicationClient;
import com.uav.telem.communication.rxtx.fifth.FifthRxtxCommunicationClient;
import com.uav.telem.communication.service.BidirectionalService;
import lombok.extern.slf4j.Slf4j;
import org.springframework.beans.factory.InitializingBean;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Component;

@Slf4j
@Component
public class ConnectDespatcher implements Runnable, InitializingBean {


    @Autowired
    private BidirectionalService bidirectionalService;

    @Autowired
    private TelemCommunicationConfig telemCommunicationConfig;


    @Override
    public void run() {



        FifthRxtxCommunicationClient fifthRxtxCommunicationClient
                = new FifthRxtxCommunicationClient(bidirectionalService, telemCommunicationConfig);
        new Thread(fifthRxtxCommunicationClient).start();


        try {
            log.debug("等待countDownLatch释放");
            telemCommunicationConfig.getFifthConnectCountDownLatch().await();
        } catch (InterruptedException e) {
            throw new RuntimeException(e);
        }

        log.debug("countDownLatch已释放, 启动飞控串口连接线程");

        try {
            Thread.sleep(2000);
        } catch (InterruptedException e) {
            throw new RuntimeException(e);
        }



        FlightControlRxtxCommunicationClient flightControlRxtxCommunicationClient
                = new FlightControlRxtxCommunicationClient(bidirectionalService, telemCommunicationConfig);
        new Thread(flightControlRxtxCommunicationClient).start();

    }


    @Override
    public void afterPropertiesSet() throws Exception {
        new Thread(this).start();
    }
}
