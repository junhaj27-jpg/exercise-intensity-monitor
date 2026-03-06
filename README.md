# Heart Rate–Based Exercise Intensity Monitor

A wearable system that measures heart rate using a PPG sensor and estimates exercise intensity using the Karvonen formula.

---

## Device Overview

![Device](images/device_photo.jpg)

The prototype device integrates a PPG heart rate sensor, Arduino microcontroller, and Bluetooth communication module for real-time monitoring.

---

## Circuit Connection

![Circuit](images/circuit_connection.jpg)
<img width="473" height="636" alt="image" src="https://github.com/user-attachments/assets/43e21d11-3517-4839-8014-eccaf96a4024" />



The circuit connects the PPG sensor to the Arduino for heart rate signal acquisition and processing.

---

## 3D Model Design

![3D Model](images/device_render.png)

The enclosure was designed using Autodesk Inventor and printed to house the sensor and electronics.

---

## System Workflow

PPG Sensor → Heart Rate Detection → Karvonen Formula → Exercise Intensity Output

---

## Hardware Components

- Arduino Uno
- PPG Sensor (MAX30102 / Pulse Sensor)
- HC-06 Bluetooth Module
- Jumper wires
- Power module

---

## Exercise Intensity Calculation

Exercise intensity is calculated using the **Karvonen formula**:

Target HR = (HRmax − HRrest) × Intensity + HRrest

---

## Repository Structure
