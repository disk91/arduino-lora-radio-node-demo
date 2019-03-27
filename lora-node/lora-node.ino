/**
 * Running a periodic communication over LoRaWan using a LoRa Radio Node v1.0 Board
 * This demo is using a synchronous LMIC wrapper to simplify reading and understanding
 * for beginers. 
 * You need to setup you LoRaWan configuration in the LoraWan.cpp file before beeing able to
 * register on TTN network or any other Network.
 * 
 * Dependencies:
 * - LMIC LoRaWan stack (find it in library manager)
 * - LowPower 
 * 
 * Documentation:
 * - LMIC need a little setup, please read:
 *   https://www.disk91.com/2019/technology/lora/hoperf-rfm95-and-arduino-a-low-cost-lorawan-solution/
 * - To get more information about this board, please read: 
 *   https://www.disk91.com/2019/technology/lora/first-steps-with-lora-radio-node-arduino/
 * 
 */


#include "LowPower.h"
#include "loraWan.h"

static uint8_t mydata[] = {0,1,2,3,4,5,6,7,8,9,10,11};


void setup() {
    Serial.begin(9600);
    Serial.println(F("Starting"));

    lorawan_setup();
}

void loop() {
    lorawan_send(1, mydata, 12, false, NULL, NULL, NULL);
    LowPower.powerDown(SLEEP_8S,ADC_OFF, BOD_OFF);
    LowPower.powerDown(SLEEP_8S,ADC_OFF, BOD_OFF);
}
