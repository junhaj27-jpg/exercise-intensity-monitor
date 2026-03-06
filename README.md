
# Heart Rate–Based Exercise Intensity Monitor

A wearable device that measures heart rate using a **PPG sensor** and estimates exercise intensity using the **Karvonen formula**.

This system integrates **Arduino, PPG sensor, Bluetooth communication, and a mobile application** to provide real-time exercise intensity monitoring.

---

## Device Overview

![device](images/device_photo.jpg)

The prototype device includes:

- PPG heart rate sensor
- Arduino microcontroller
- Bluetooth communication module
- Battery power supply
- Wearable enclosure (3D printed)

---

## Circuit Connection

![circuit](images/circuit_connection.jpg)

The PPG sensor detects blood volume changes in the skin and sends signals to the Arduino for heart rate calculation.

---

## System Architecture


---

## Hardware Components

| Component | Description |
|---|---|
| Arduino Uno | Microcontroller for signal processing |
| PPG Sensor (MAX30102 / Pulse Sensor) | Heart rate detection |
| HC-06 Bluetooth Module | Wireless communication |
| Battery Module | Portable power supply |
| Jumper Wires | Circuit connection |

---

## Exercise Intensity Calculation

### Karvonen Formula

![formula](https://latex.codecogs.com/png.image?\dpi{120}THR=(HR_{max}-HR_{rest})\times Intensity+HR_{rest})

Where

- **HRmax** = 220 − age  
- **HRrest** = resting heart rate  
- **Intensity** = desired exercise intensity level  

### Exercise Intensity Zones

| Intensity | Training Goal |
|---|---|
| 50–60% | Light activity |
| 60–70% | Fat burning |
| 70–85% | Cardiovascular training |

This method enables **personalized exercise intensity calculation based on heart rate**.

---

## 3D Model Design

![3D model](images/device_render.png)

The enclosure was designed using **Autodesk Inventor** and manufactured using **3D printing**.

---

## Features

- Real-time heart rate monitoring
- Personalized exercise intensity calculation
- Bluetooth communication with mobile application
- Wearable device design

---

## Mobile Application

The mobile application displays:

- Real-time BPM
- Target heart rate
- Exercise intensity zone

---

## Future Improvements

- Motion artifact filtering
- Integration with **SpO₂ measurement**
- Smaller microcontroller (Arduino Nano)
- Data logging and exercise analysis
- Improved mobile application UI

---

## Project Structure

---

## Authors

**Junha Jung**  
**Gyuseok Hwang**

Medical Convergence Engineering

---

## License

This project is developed for **academic research and educational purposes**.

