#include <Arduino.h>
#include "DHT.h"
#include "Adafruit_Sensor.h"


#define DHTTYPE DHT11
int sensePin = 2;
/*creating the object*/
DHT HT(sensePin, DHTTYPE);
/*setting up variables for measuring humidity and temperature*/
float humidity;
float tempC;
float tempF;
int setTime = 500;
int dt = 1000;
void setup() {
    Serial.begin(9600);
    HT.begin();
    delay(setTime); 
    while (!Serial)
    {
        ;
    }

}

void loop() {
    humidity = HT.readHumidity();
    tempC = HT.readTemperature();
    tempF = HT.readTemperature(true);

    Serial.print("Humidity: ");
    Serial.print(humidity);
    Serial.print("Temperature ");
    Serial.print(tempC);
    Serial.print(" c ");
    Serial.print(tempF);
    Serial.println(" F ");
    delay(dt);
}
