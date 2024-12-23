/*
  Library for LM75 Temperature Sensor
  Reads temperature via I2C interface

  Created by: Shoham Cohen and Issac Cohen
  Educational website: http://www.elec4u.co.il

  Connections:
  Arduino   LM75 Sensor
  5V        VCC
  GND       GND
  A4        SDA
  A5        SCL

  This library communicates with the LM75 sensor over I2C,
  retrieves the temperature data, and provides it in Celsius.
*/

#include <LM75_elec4u_co_il.h> // Include the custom LM75 library

// Create an LM75 object with the I2C address of the sensor (default: 0x48)
LM75_elec4u_co_il lm75(0x48);

void setup()
{
  Serial.begin(9600); // Initialize serial communication at 9600 baud
  lm75.begin();       // Initialize the LM75 sensor
}

void loop()
{
  // Read the temperature from the LM75 sensor
  float temperature = lm75.readTemperature();

  // Print the temperature to the Serial Monitor
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  delay(1000);
}
