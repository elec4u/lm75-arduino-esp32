/*
  Library for LM75 Temperature Sensor
  Demonstrates over-temperature alarm functionality

  Created by: Shoham Cohen and Issac Cohen
  Educational website: http://www.elec4u.co.il

  Connections:
  Arduino   LM75 Sensor
  5V        VCC
  GND       GND
  A4        SDA
  A5        SCL

  This library communicates with the LM75 sensor over I2C
  and checks for temperatures exceeding a specified threshold.
*/

#include <LM75_elec4u_co_il.h>

LM75_elec4u_co_il lm75(0x48); // LM75 sensor with default I2C address

void setup() 
{
  Serial.begin(9600); // Initialize Serial Monitor
  lm75.begin();       // Initialize the LM75 sensor
  
  lm75.setOverTemperatureThreshold(30.0); // Set threshold to 30°C
}

void loop() 
{
  float temperature = lm75.readTemperature(); // Read temperature
  
  if (lm75.isOverTemperature()) 
  {
    Serial.print("WARNING! High temperature: ");
    Serial.print(temperature);
    Serial.println(" °C");
  } 
  else 
  {
    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.println(" °C");
  }

  delay(1000); // Wait 1 second
}
