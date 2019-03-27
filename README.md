# arduino-lora-radio-node-demo
Sample code running on Lora Radio Node v1.0 board with Low Power enabled

This sample code is documented in a blog post you can find (on disk91.com)[https://www.disk91.com/2019/technology/lora/first-steps-with-lora-radio-node-arduino/]

## Information

Running a periodic communication over LoRaWan using a LoRa Radio Node v1.0 Board
This demo is using a synchronous LMIC wrapper to simplify reading and understanding
for beginers. 
You need to setup you LoRaWan configuration in the LoraWan.cpp file before beeing able to
register on TTN network or any other Network.

### Dependencies:
- LMIC LoRaWan stack (find it in library manager)
- LowPower 
 
### Documentation:
- LMIC need a little setup, please read:
  https://www.disk91.com/2019/technology/lora/hoperf-rfm95-and-arduino-a-low-cost-lorawan-solution/
- To get more information about this board, please read: 
  https://www.disk91.com/2019/technology/lora/first-steps-with-lora-radio-node-arduino/
