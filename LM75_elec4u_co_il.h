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

#ifndef LM75_ELEC4U_CO_IL_H
#define LM75_ELEC4U_CO_IL_H

#include <Wire.h>

class LM75_elec4u_co_il {
  public:
    LM75_elec4u_co_il(uint8_t i2cAddress);
    void begin();
    float readTemperature();
  private:
    uint8_t _i2cAddress;
};

#endif
