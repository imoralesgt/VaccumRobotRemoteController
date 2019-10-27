/*
 * Dependencies:
 * - IRremoteESP8266
 * 
 */

#include <stdio.h>
#include <IRsend.h>

const uint16_t IR_LED = D13;
IRsend irsend(IR_LED);


void setup() {
  // put your setup code here, to run once:

  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(IR_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  irsend.sendNEC(0x02aa22dd);
  delay(500);
}
