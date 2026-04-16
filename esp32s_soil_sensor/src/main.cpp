#include <Arduino.h>
// #include <SPI.h>
// #include <Wire.h>

const int AirValue = 3620;   //you need to replace this value with Value_1
const int WaterValue = 1680;  //you need to replace this value with Value_2
const int SensorPin = 36;
int soilMoistureValue = 0;
int soilmoisturepercent=0;


void setup() {
  Serial.begin(115200); // open serial port, set the baud rate to 9600 bps
}


void loop() 
{
soilMoistureValue = analogRead(SensorPin);  //put Sensor insert into soil
// Serial.println(soilMoistureValue);
soilmoisturepercent = map(soilMoistureValue, AirValue, WaterValue, 0, 100);

  Serial.println(soilMoistureValue);
  // Serial.println("%");
  delay(250);

}