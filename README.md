# Heart Rate–Based Exercise Intensity Monitor

A wearable system that measures heart rate using a **PPG sensor** and estimates exercise intensity using the **Karvonen Formula (카보넨 공식)**.

The system integrates an **Arduino microcontroller, PPG sensor, Bluetooth communication module, and mobile application** to provide real-time heart rate monitoring and personalized exercise intensity recommendations.

---

# Project Overview

Maintaining an appropriate exercise intensity is important for achieving different fitness goals such as rehabilitation, fat burning, cardiovascular endurance, and athletic performance.

This project measures heart rate using a **PPG sensor** and calculates a **target heart rate using the Karvonen formula**.

The calculated heart rate and exercise intensity level are transmitted via **Bluetooth** and displayed on a **mobile application**.

---

# Device Overview

![device](images/device_photo.jpg)

The prototype device consists of:

- PPG heart rate sensor
- Arduino microcontroller
- Bluetooth communication module
- Battery module
- Wearable enclosure (3D printed)

---

# Circuit Connection

![circuit](images/circuit_connection.jpg)

The PPG sensor detects blood volume changes in the skin and converts them into electrical signals.

The Arduino processes these signals to calculate **heart rate in BPM (Beats Per Minute)**.

---

# PPG Sensor Principle

Photoplethysmography (PPG) is an optical measurement technique used to detect blood volume changes in microvascular tissue.

The PPG sensor works by:

1. Emitting light into the skin  
2. Detecting reflected light from blood vessels  
3. Measuring periodic changes caused by heartbeats  

These signals are used to calculate **heart rate**.

---

# System Architecture

  
---

# Hardware Components

| Component | Description |
|---|---|
| Arduino Uno | Microcontroller for signal processing |
| MAX30102 / Pulse Sensor | Heart rate detection |
| HC-06 Bluetooth Module | Wireless communication |
| Battery Module | Portable power supply |
| Jumper Wires | Circuit connection |

---

# Exercise Intensity Calculation

## Karvonen Formula (카보넨 공식)

Exercise intensity is calculated using the **Karvonen Formula**, which determines a personalized target heart rate.

Target HR = (HRmax − HRrest) × Intensity + HRrest

Where

- **HRmax** = 220 − age  
- **HRrest** = resting heart rate  
- **Intensity** = exercise intensity level  

The Karvonen formula enables personalized exercise intensity based on individual physical condition.

---

# Exercise Intensity Levels

The system divides exercise intensity into **four levels**.

| Level | Intensity Range | Purpose |
|---|---|---|
| Level 1 | 50–60% | Rehabilitation / Light activity |
| Level 2 | 60–70% | Fat burning |
| Level 3 | 70–80% | Cardiovascular endurance |
| Level 4 | 80–90% | High intensity training |

---

# Personalized Exercise Recommendation

The exercise intensity can be adjusted according to the user's physical condition.

### Patient / Rehabilitation

Recommended intensity:

50–60%

Used for:

- rehabilitation
- recovery training
- elderly patients

---

### General Users

Recommended intensity:

60–70%

Used for:

- fat burning
- general fitness

---

### Athletes

Recommended intensity:

70–90%

Used for:

- endurance training
- performance improvement

---

# Exercise Intensity Algorithm

The system calculates exercise intensity using the following process.


---

# Arduino Code Explanation

The Arduino performs the following tasks:

### 1. Sensor Data Acquisition

The PPG sensor measures blood flow signals.

### 2. Heart Rate Calculation

The Arduino calculates **BPM (Beats Per Minute)** from the PPG signal.

Example formula:

