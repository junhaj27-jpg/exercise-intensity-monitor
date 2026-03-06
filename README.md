Heart Rate–Based Exercise Intensity Monitor

A wearable device that measures heart rate using a PPG sensor and estimates exercise intensity using the Karvonen formula.

Project Overview

This project aims to help users monitor their exercise intensity using heart rate.

By measuring heart rate in real time and applying the Karvonen formula, the system calculates a target heart rate zone suitable for the user.

The device integrates a PPG sensor, Arduino microcontroller, and Bluetooth module to transmit heart rate data to a mobile application.

The Karvonen formula allows personalized exercise intensity calculation by considering both maximum heart rate and resting heart rate. 

졸업설계 _수정

Device Overview

The prototype device integrates:

PPG heart rate sensor

Arduino microcontroller

Bluetooth communication module

Battery power supply

Wearable enclosure

Circuit Connection

The PPG sensor measures blood flow changes and sends signals to the Arduino for heart rate calculation.

System Workflow
PPG Sensor
     ↓
Heart Rate Detection (BPM)
     ↓
Karvonen Formula
     ↓
Exercise Intensity Calculation
     ↓
Bluetooth Transmission
     ↓
Mobile App Display
Hardware Components

Arduino Uno

PPG Sensor (MAX30102 / Pulse Sensor)

HC-06 Bluetooth Module

Jumper Wires

Battery Module

Exercise Intensity Calculation

Exercise intensity is calculated using the Karvonen formula:

𝑇
𝑎
𝑟
𝑔
𝑒
𝑡
𝐻
𝑅
=
(
𝐻
𝑅
𝑚
𝑎
𝑥
−
𝐻
𝑅
𝑟
𝑒
𝑠
𝑡
)
×
𝐼
𝑛
𝑡
𝑒
𝑛
𝑠
𝑖
𝑡
𝑦
+
𝐻
𝑅
𝑟
𝑒
𝑠
𝑡
TargetHR=(HR
max
	​

−HR
rest
	​

)×Intensity+HR
rest
	​


Where

HRmax = 220 − age

HRrest = resting heart rate

Intensity = desired exercise intensity

Typical exercise zones:

Intensity	Purpose
50–60%	Light activity
60–70%	Fat burning
70–85%	Cardiovascular training

This method allows users to exercise within a personalized heart rate zone. 

졸업설계 _수정

3D Model Design

The device enclosure was designed using Autodesk Inventor and produced with 3D printing.

Features

Real-time heart rate monitoring

Personalized exercise intensity calculation

Bluetooth communication with mobile application

Wearable device design

Future Improvements

Motion artifact filtering

Integration with SpO₂ measurement (MAX30102)

Smaller microcontroller (Arduino Nano)

Improved mobile app UI

Authors

Junha Jung
Gyuseok Hwang

Medical Convergence Engineering

💡 추천

README에 이것도 추가하면 훨씬 좋아짐

📂 Project Structure
📱 App Screen
📊 Heart Rate Graph
🎥 Demo Video
