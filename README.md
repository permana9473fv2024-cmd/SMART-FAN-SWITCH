# 🌬️ SMART-FAN-SWITCH (Arduino-Based Smart Fan)

![Arduino](https://img.shields.io/badge/-Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white)
![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)

## 📸 Gambar Rangkaian
<img width="1916" height="942" alt="Gambar Rangkaian" src="https://github.com/user-attachments/assets/1f25fe77-631d-42b5-9a6c-0aaab5c47c65" />


## 📖 Description
Hello everyone! Welcome to my university project repository for the microcontroller class. This repository presents an interactive Smart Fan simulation centered around the versatile Arduino Uno. The system is designed to replicate the everyday mechanics of a commercial desk fan, elevating it through the integration of modern digital control. By combining electro-mechanical actuators, precise speed modulation techniques, and real-time status monitoring, the prototype bridges the gap between basic appliances and intelligent automated systems. The primary objective is to demonstrate how analog inputs can be seamlessly translated into synchronized mechanical outputs while providing constant visual feedback.

The operational workflow is highly intuitive and features a built-in fail-safe mechanism. A primary slide switch serves as both the master power control and an emergency stop. When toggled to the ON position, the system transitions from standby to an active mode, immediately signaled by a red LED indicator. In case of an emergency or when powered down, toggling the switch OFF executes a graceful but instant shutdown: immediately halting the main motor, disabling the LED, and commanding the oscillation mechanism to return to a centered, forward-facing position.

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

## 🔗 Link
* [Source Code](https://github.com/permana9473fv2024-cmd/SMART-FAN-SWITCH/blob/main/Code.ino)
* [TinkerCAD](https://www.tinkercad.com/things/i7gJF1iMUbZ-brave-kasi/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard&sharecode=e3bFL1r7fL0kbu9hlfht1UG9M825wudXA7_Jn3c3sak)
* [Schematics](https://github.com/permana9473fv2024-cmd/SMART-FAN-SWITCH/blob/main/Schematic%20Rangkaian.pdf)
* [Video Documentation](https://github.com/permana9473fv2024-cmd/SMART-FAN-SWITCH/blob/main/Video_Tinkercad.mp4)

---

## ⚙️ System Logic (Cara Kerja)
1. **Standby Mode:** Saat sakelar di posisi OFF (LOW), mikrokontroler memutus sinyal PWM, mematikan LED, dan mengembalikan posisi Servo ke titik tengah (90°). Layar LCD menampilkan status "MATI".
2. **Active Mode:** Saat sakelar digeser ke ON (HIGH), sistem aktif dan membaca input analog dari potensiometer (0-1023).
3. **Speed Control:** Nilai analog tersebut di-mapping menjadi nilai PWM (0-255) yang dikirim ke pin `EN1` pada L293D untuk memutar motor DC.
4. **Auto-Swing:** Secara bersamaan, Servo Motor akan melakukan *looping* ayunan dari sudut 50° ke 130° dan sebaliknya dengan penambahan *step* yang halus.
5. **Real-time UI:** LCD I2C di-update secara berkala tanpa menggunakan fungsi `delay()` yang memblokir program, sehingga pembacaan sensor dan pergerakan aktuator tetap responsif.
6. **Emergency / Fail-Safe Stop:** Berfungsi ganda sebagai pengaman, menggeser sakelar utama ke posisi OFF akan secara instan memutus daya putaran aktuator motor DC dan menghentikan pergerakan mekanis secara aman dan terkendali.

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
| Slide Switch | `D2` | Input (Power ON/OFF & Emergency Halt) |
| Potentiometer | `A0` | Input (Speed Control) |
| L293D (EN1) | `D10` | Output (PWM Motor Speed) |
| L293D (IN1) | `D8` | Output (Motor Direction) |
| L293D (IN2) | `D7` | Output (Motor Direction) |
| Motor Servo | `D9` | Output (Swing Control) |
| Red LED | `D12` | Output (Power Indicator) |
| LCD I2C (SDA) | `A4` | I2C Data |
| LCD I2C (SCL) | `A5` | I2C Clock |

---
<p align="center">
  Made with by <a href="https://github.com/permana9473fv2024-cmd">Permana Eka Prayoga</a>
</p>
