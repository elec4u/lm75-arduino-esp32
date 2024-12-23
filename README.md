LM75 Arduino & ESP32 Library

Description  
This library provides an easy-to-use interface for the LM75 temperature sensor. It allows you to read temperature data via the I2C interface and includes additional features like over-temperature alerts and integration with various Arduino and ESP32 projects.  
The library is designed for students, educators, and hobbyists working on projects that require precise temperature readings.  

---

Installation  
Using the Arduino Library Manager  
1. Open the Arduino IDE.  
2. Go to Sketch > Include Library > Manage Libraries....  
3. Search for `LM75_elec4u_co_il`.  
4. Click Install.  

Manual Installation  
1. Download the library as a ZIP file from this repository.  
2. Open the Arduino IDE.  
3. Go to Sketch > Include Library > Add .ZIP Library....  
4. Select the downloaded ZIP file to add it to your libraries.  

---
Connections  
Connecting LM75 to Arduino:  
Arduino Pin   LM75 Pin  
5V            VCC  
GND           GND  
A4            SDA  
A5            SCL  

Connecting LM75 to ESP32:  
ESP32 Pin     LM75 Pin  
3.3V or 5V    VCC  
GND           GND  
GPIO21        SDA  
GPIO22        SCL  

---

Features  
- Read temperature in Celsius and Fahrenheit.  
- Configure over-temperature thresholds.  
- Supports Arduino and ESP32 platforms.  
- Example sketches for quick integration.  

---

Credits  
Created by:  
- Shoham Cohen  
- Isaac Cohen  

This library was developed as part of the educational initiative on elec4u.co.il.  

---

License  
This project is licensed under the MIT License.  
See the LICENSE file for details.  

---

Contributions  
We welcome contributions! If you encounter issues or have suggestions for improvements, feel free to:  
1. Open an issue on GitHub.  
2. Submit a pull request.  

---

Additional Resources  
Visit our educational website: http://www.elec4u.co.il  
Explore detailed guides, tutorials, and projects for Arduino, ESP32, and other microcontrollers.  

---

Enjoy using the library, and feel free to share your feedback!  
