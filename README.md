# Ultrasonic Parking Assistant 🚗

An embedded C++ project demonstrating sensor data processing and I2C communication on an Arduino Uno.

## Overview
This project simulates a car's parking radar system. It calculates physical distance using the Time-of-Flight principle from an ultrasonic sensor, outputs the data to an LCD screen via the I2C protocol, and provides dynamic audio feedback using a piezo buzzer.

## Hardware Used
* Arduino Uno
* HC-SR04 Ultrasonic Distance Sensor
* 16x2 LCD Display (I2C)
* Piezo Buzzer

## Key Concepts Demonstrated
* **Sensor Integration:** Reading and converting raw pulse-width data into centimeters.
* **I2C Protocol:** Driving a display using minimal wiring (SDA/SCL lines).
* **Dynamic Output:** Adjusting buzzer frequency and delays based on real-time distance thresholds.

## Simulation
You can test the circuit and review the code directly in your browser:
[▶️ Run Simulation on Wokwi](https://wokwi.com/projects/456949573531470849)
