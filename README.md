SensorBob
===
# Projet
Bienvenue sur le projet sensorBob : un capteur embarqué qui va permettre de faire de la prévision de panne. Rien que ça !

# Fonctionnalités
- Capteur de vibration
- Envoi des données
- Stockage dans le cloud
- Dashboard de monitoring
- Analyse avancées du profil vibratoire

# Points à creuser

## How to measure vibrations ?
Vibration = accélération (amplitude + direction)
- accéléromètre
- gyromètre ?

"Accelerometers are the preferred motion sensors for most vibration monitoring." [source DigiKey](https://www.digikey.com/en/articles/techzone/2012/oct/what-you-need-to-know-about-vibration-sensors)

Five main features must be considered when selecting vibration sensors:
- measuring range
- frequency range
- accuracy
- transverse sensitivity
- ambient conditions

Accelerometers characteristics: [source National Instruments](http://www.ni.com/white-paper/3807/en/)
- vibration amplitude
- sensitivity
- number of axes
- weight
- mounting options
- environmental constraints
- cost

## Choosing the right arduino
- sensors :
  - vibrations or accelerations
- connection :
  - WiFi ?
  - Bluetooth ?

- [Arduino MKR Zero](https://store.arduino.cc/arduino-mkrfox1200)
- [Arduino MKR1000](https://store.arduino.cc/arduino-mkr1000-with-headers-mounted) is a powerful board that combines the functionality of the **Zero** and the **Wi-Fi** Shield. It is the ideal solution for makers wanting to design IoT projects with minimal previous experience in networking.
- [MKR Fox 1200](https://store.arduino.cc/arduino-mkrfox1200), same as previous with **SigFox** connectivity instead of Wi-Fi

Accelerometers:
- Grove 3-axis digital accelerometer [by Arduino](https://store.arduino.cc/grove-3-axis-digital-accelerometer-16g)

## Getting the hands on the arduino mkr1000
1. Install the arduino IDE
2. Follow instructions for the mkr1000: https://www.arduino.cc/en/Guide/MKR1000
3. Linux debugging
  - add user to dialout group: `sudo usermod -a -G dialout`
4. easier: sudo apt-get install arduino

## Install the Arduino IDE
- Linux: https://www.arduino.cc/en/Guide/Linux

    tar -xzvf arduino-1.8.5-linux64.tar.xz
    cd arduino-1.8.5
    ./install.sh

- Getting started: https://www.arduino.cc/en/Guide/HomePage
- Install a Core: https://www.arduino.cc/en/Guide/Cores
- Install drivers if needed (not for Linux)

## Connect to WiFi
https://www.arduino.cc/en/Reference/WiFi101
Follow any example, to see the output open the Serial Monitor !

## Use Grove Sensor
http://www.seeedstudio.com/blog/2016/03/09/tutorial-intro-to-grove-connectors-for-arduinoraspberry-pi-projects/

The Grove accelerometer +/-16g is based on the ADXL345 sensor.
- a library: https://github.com/jarzebski/Arduino-ADXL345
- another library: https://github.com/jakalada/Arduino-ADXL345
- technical resources about ADXL345: https://store.ncd.io/product/adxl345-3-axis-accelerometer-13-bit-i2c-mini-module/
- nice tuto: https://morf.lv/mems-part-1-guide-to-using-accelerometer-adxl345

Communication I2C avec un catpeur :
- http://f-leb.developpez.com/tutoriels/arduino/bus-i2c/
- https://f-leb.developpez.com/tutoriels/arduino/bus-i2c/#LI

## How does communication and sensor settings work ?
Communication: 1. send the address where you want read or write 2. send the value you want to write or request specific amount of bytes.

# Example projets
- RuralHub & Arduino for environmental monitoring projects : [github](https://github.com/OfficineArduinoTorino/RuralHack)

# Install Platformio
- with VSCode: http://docs.platformio.org/en/latest/ide/vscode.html#ide-vscode

