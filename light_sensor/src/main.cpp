#include <Arduino.h>
int analogpin;

void setup() {
  pinMode(A3, INPUT);
  Serial.begin(9600);
  while (!Serial)
  {
    ;
  }
}

void loop() {
  analogpin = analogRead(A3);
  Serial.print("light value: ");
  Serial.println(analogpin);
  delay(5000);
}
