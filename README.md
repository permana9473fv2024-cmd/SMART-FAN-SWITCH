# 🌬️ SMART-FAN-SWITCH (Arduino-Based Smart Fan)

![Arduino](https://img.shields.io/badge/-Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white)
![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)

## 📸 Gambar Rangkaian
<img width="1916" height="942" alt="Gambar Rangkaian" src="https://github.com/user-attachments/assets/1f25fe77-631d-42b5-9a6c-0aaab5c47c65" />


## 📖 Description
Hello everyone! Welcome to my university project repository for the microcontroller class. This project features an interactive **Arduino-based Smart Fan** simulation designed in Tinkercad. It demonstrates the integration of analog inputs, digital logic, and electro-mechanical actuators into a cohesive embedded system.

Based on the circuit diagram above, the system operates as follows:
* **Power & Safety:** A Slide Switch acts as the master power and emergency halt button. When toggled ON, a Red LED lights up to indicate the system is active.
* **Speed Control:** The fan's blade speed is manually adjusted using a Potentiometer. The Arduino converts this analog reading into a PWM signal, sending it to the L293D Motor Driver to smoothly spin the DC Gear Motor.
* **Auto-Swing:** While active, a Micro Servo automatically oscillates between 50° and 130° to mimic a real fan's panning motion.
* **Live Dashboard:** A 16x2 I2C LCD continuously displays the current power state ("NYALA"/"MATI") and the real-time speed percentage.

This prototype effectively bridges basic electronic principles with practical household automation.

---

## 👨‍🎓 Identitas Mahasiswa
| Keterangan | Detail |
| :--- | :--- |
| **Nama** | Permana Eka Prayoga |
| **NIM** | 24090620005 |
| **Program Studi** | D4 Teknik Elektronika |
| **Mata Kuliah** | Praktek Mikrokontroller |
| **Email** | permana9473fv.2024@student.uny.ac.id |

---

## 🔗 Link
* [Source Code](https://github.com/permana9473fv2024-cmd/SMART-FAN-SWITCH/blob/main/Code.ino)
* [TinkerCAD](https://www.tinkercad.com/things/i7gJF1iMUbZ-brave-kasi/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard&sharecode=e3bFL1r7fL0kbu9hlfht1UG9M825wudXA7_Jn3c3sak)
* [Schematics](https://github.com/permana9473fv2024-cmd/SMART-FAN-SWITCH/blob/main/Schematic%20Rangkaian.pdf)
* [Video Documentation](https://github.com/permana9473fv2024-cmd/SMART-FAN-SWITCH/blob/main/Video_Tinkercad.mp4)

---

## ⚙️ System Logic
1. **Standby Mode:** When the switch is in the OFF (LOW) position, the microcontroller cuts off the PWM signal, turns off the LED, and returns the Servo to its center position (90°). The LCD displays the status as "MATI" (OFF).
2. **Active Mode:** When the switch is toggled ON (HIGH), the system activates and reads the analog input from the potentiometer (0-1023).
3. **Speed Control:** The analog value is mapped to a PWM value (0-255) which is sent to the `EN1` pin on the L293D to rotate the DC motor.
4. **Auto-Swing:** Simultaneously, the Servo Motor loops its swing from 50° to 130° and vice versa with smooth step increments.
5. **Real-time UI:** The I2C LCD is updated periodically without using blocking `delay()` functions, ensuring sensor readings and actuator movements remain highly responsive.
6. **Emergency / Fail-Safe Stop:** Doubling as a safety feature, toggling the main switch to the OFF position instantly cuts power to the DC motor's rotation and safely halts all mechanical movements.

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
