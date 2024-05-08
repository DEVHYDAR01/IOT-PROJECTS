#include <Arduino.h>

int Led1 = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(Led1, OUTPUT);
 
}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Led1, HIGH);
  delay(1000);
  digitalWrite(Led1, LOW);
  delay(1000);
}