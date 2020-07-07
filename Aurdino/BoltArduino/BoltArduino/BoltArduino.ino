#include <BoltDeviceCredentials.h>
#include <BoltIoT-Arduino-Helper.h>

#include <BoltIot-Arduino-Helper.h>
  void setup() {
    boltiot.Begin(Serial); //Initialize the Bolt interface over serial uart. Serial could be replaced with Serial0 or Serial1 on Arduino mega boards.
         //In this example Tx pin of Bolt is connected to Rx pin of Arduino Serial Port
         //and Rx pin of Bolt is connected to tx pin of arduino Serial Port
    pinMode(2,INPUT); //Set pin 2 as input. We will send this pin's state as the data to the Bolt Cloud
  }
  void loop() {
    boltiot.CheckPoll(digitalRead(2)); //Send data to the Bolt Cloud, when the Bolt polls the Arduino for data.
  //This function needs to be called regularly. Calling the CheckPoll function once every seconds is required
  }
