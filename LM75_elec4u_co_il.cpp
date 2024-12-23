#include "LM75_elec4u_co_il.h"

LM75_elec4u_co_il::LM75_elec4u_co_il(uint8_t i2cAddress) {
  _i2cAddress = i2cAddress;
}

void LM75_elec4u_co_il::begin() {
  Wire.begin();
}

float LM75_elec4u_co_il::readTemperature() {
  Wire.beginTransmission(_i2cAddress);
  Wire.write(0x00); // Register address for temperature
  Wire.endTransmission();
  Wire.requestFrom(_i2cAddress, (uint8_t)2);

  if (Wire.available() == 2) {
    uint8_t msb = Wire.read();
    uint8_t lsb = Wire.read();
    int16_t temp = (msb << 8) | lsb;
    temp >>= 7; // LM75 has a 9-bit temperature value
    return temp * 0.5;
  } else {
    // Return an error value if data is not available
    return -1000.0;
  }
}
