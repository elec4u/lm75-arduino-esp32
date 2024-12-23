/*
  Library for LM75 Temperature Sensor
  Reads temperature in both Celsius and Fahrenheit

  Created by: Shoham Cohen and Issac Cohen
  Educational website: http://www.elec4u.co.il

  Connections:
  Arduino   LM75 Sensor
  5V        VCC
  GND       GND
  A4        SDA
  A5        SCL

  This library communicates with the LM75 sensor over I2C,
  retrieves the temperature data, and provides it in Celsius and Fahrenheit.
*/

#include <LM75_elec4u_co_il.h>

LM75_elec4u_co_il lm75(0x48); // LM75 sensor with default I2C address

void setup() 
{
  Serial.begin(9600); // Initialize Serial Monitor
  lm75.begin();       // Initialize the LM75 sensor
}

void loop() 
{
  float tempCelsius = lm75.readTemperature(); // Temperature in Celsius
  float tempFahrenheit = (tempCelsius * 9.0 / 5.0) + 32.0; // Convert to Fahrenheit

  Serial.print("Temperature: ");
  Serial.print(tempCelsius);
  Serial.print(" °C / ");
  Serial.print(tempFahrenheit);
  Serial.println(" °F")
}