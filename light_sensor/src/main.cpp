#include <Arduino.h>
int ldr_pin = 7;
int led_pin = 13;


void setup() {
  pinMode(ldr_pin, INPUT);
  pinMode(led_pin, OUTPUT);
  Serial.begin(9600);
  while (!Serial)
  {
    ;
  }
}

void loop() {
  if (digitalRead(ldr_pin) == 1)
  {
    digitalWrite(led_pin, HIGH);
  }
  else
  {
    digitalWrite(led_pin, LOW);
  }

  Serial.println(digitalRead(ldr_pin));
  // delay(100);
}
