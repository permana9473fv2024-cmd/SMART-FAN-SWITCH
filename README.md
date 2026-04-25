# 🌬️ SMART-FAN-SWITCH (Arduino-Based Smart Fan)

![Arduino](https://img.shields.io/badge/-Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white)
![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)

## 📸 Gambar Rangkaian
<img src="Gambar%20Rangkaian.jpg" alt="Gambar Rangkaian Smart Fan" width="100%">

## 📖 Description
Hello everyone! Welcome to my university project repository for the microcontroller class. This repository presents an interactive Smart Fan simulation centered around the versatile Arduino Uno. The system is designed to replicate the everyday mechanics of a commercial desk fan, elevating it through the integration of modern digital control. By combining electro-mechanical actuators, precise speed modulation techniques, and real-time status monitoring, the prototype bridges the gap between basic appliances and intelligent automated systems. The primary objective is to demonstrate how analog inputs can be seamlessly translated into synchronized mechanical outputs while providing constant visual feedback.

The operational workflow is highly intuitive. A primary slide switch serves as the master power control. When toggled to the ON position, the system transitions from standby to an active mode, immediately signaled by a red LED indicator. When powered down, the microcontroller executes a graceful shutdown: turning off the main motor, disabling the LED, and commanding the oscillation mechanism to return to a centered, forward-facing position.

One standout feature is its precise speed control. Instead of relying on restrictive mechanical buttons, this simulation utilizes a rotary potentiometer to offer fluid, variable speed adjustment. The Arduino reads the analog voltage and mathematically maps it to a Pulse Width Modulation (PWM) signal. This PWM signal is fed into an L293D motor driver, which efficiently regulates the voltage supplied to the DC motor representing the fan blades.

To emulate the realistic behavior of a commercial fan, the prototype features an automated panning mechanism powered by a micro servo motor. When activated, the servo independently begins a sweeping motion. The oscillation angle is constrained within a specific range, sweeping symmetrically from 50 to 130 degrees to ensure focused airflow. Finally, real-time status monitoring is handled by a 16x2 I2C LCD, acting as a digital dashboard displaying the power state and current speed percentage.

---

## 👨‍🎓 Identitas Mahasiswa
| Keterangan | Detail |
| :--- | :--- |
| **Nama** | Permana Eka Prayoga |
| **NIM** | 24090620005 |
| **Email** | permana9473fv.2024@student.uny.ac.id |
| **Program Studi** | D4 Teknik Elektronika |
| **Mata Kuliah** | Praktek Mikrokontroller |

---

## 🔗 Link Project & Source Code
* **Code.ino** : [https://github.com/permana9473fv2024-cmd/SMART-FAN-SWITCH/blob/main/Code.ino](https://github.com/permana9473fv2024-cmd/SMART-FAN-SWITCH/blob/main/Code.ino)
* **Simulasi dan Demo Video** : [https://github.com/permana9473fv2024-cmd/SMART-FAN-SWITCH/blob/main/Link](https://github.com/permana9473fv2024-cmd/SMART-FAN-SWITCH/blob/main/Link)

---

## 📦 Component
| Name | Quantity | Component |
| :--- | :---: | :--- |
| U1 | 1 | Arduino Uno R3 |
| U2 | 1 | LCD 16x2 I2C |
| U3 | 1 | L293D Motor Driver |
| M1 | 1 | DC Motor |
| SERVO1 | 1 | Micro Servo |
| Rpot1 | 1 | Potentiometer |
| D1 | 1 | Red LED |
| R1 | 1 | 220 Ω Resistor |
| S1 | 1 | Slide Switch |
| P1 | 1 | Power Supply |

---

## 🔌 Pin Configuration
| Komponen | Pin Arduino | Description |
| :--- | :---: | :--- |
| Slide Switch | `D2` | Input (Power ON/OFF) |
| Potentiometer | `A0` | Input (Speed Control) |
| L293D (EN1) | `D10` | Output (PWM Motor Speed) |
| L293D (IN1) | `D8` | Output (Motor Direction) |
| L293D (IN2) | `D7` | Output (Motor Direction) |
| Motor Servo | `D9` | Output (Swing Control) |
| Red LED | `D12` | Output (Power Indicator) |
| LCD I2C (SDA) | `A4` | I2C Data |
| LCD I2C (SCL) | `A5` | I2C Clock |
