#include <LiquidCrystal.h>

#define SENSOR 0
#define LED 9

//LCD object

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  int brightness = analogRead(SENSOR);
  analogWrite(LED, brightness/4);
  delay(10);
}
