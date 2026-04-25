# 🌬️ SMART-FAN-SWITCH (Arduino-Based Smart Fan)

![Arduino](https://img.shields.io/badge/-Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white)
![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Status](https://img.shields.io/badge/Status-Completed-success?style=for-the-badge)

## 📖 Description
Hello everyone! Welcome to my university project repository for the microcontroller class. This repository presents an interactive and highly responsive Smart Fan simulation centered around the versatile Arduino Uno microcontroller. At its core, the system is meticulously designed to replicate the everyday mechanics and user experience of a standard commercial desk fan, elevating it through the integration of modern digital control. By combining electro-mechanical actuators, precise speed modulation techniques, and real-time status monitoring, the prototype bridges the gap between basic household appliances and intelligent automated systems. The primary objective is to demonstrate how analog inputs can be seamlessly translated into complex, synchronized mechanical outputs while providing constant visual feedback. 

The operational workflow of the Smart Fan is engineered to be highly intuitive. A primary slide switch serves as the master power control, mimicking the main physical button of a traditional appliance. When the switch is toggled to the ON position, the system instantly transitions from a dormant standby state to an active operational mode, immediately signaled by a red LED indicator. When powered down, the microcontroller executes a graceful shutdown sequence: turning off the main motor, disabling the LED, and commanding the oscillation mechanism to return to a centered, forward-facing position. 

One standout feature is its precise speed control system. Instead of relying on restrictive mechanical buttons, this simulation utilizes a rotary potentiometer to offer fluid, variable speed adjustment. The Arduino Uno continuously reads the analog voltage and mathematically maps these readings to a Pulse Width Modulation signal. This PWM signal is fed into an L293D motor driver, which efficiently regulates the voltage supplied to the DC motor representing the fan blades. 

To further emulate the realistic behavior of a commercial fan, the prototype features an automated panning mechanism powered by a micro servo motor. When fully activated, the servo independently begins a sweeping motion. The oscillation angle is constrained within a specific range, sweeping symmetrically from 50 to 130 degrees to ensure focused airflow. Finally, real-time status monitoring is elegantly handled by a 16x2 I2C LCD, acting as a digital dashboard displaying the power state and current speed percentage.

---

## 👨‍🎓 Identitas Mahasiswa
| Keterangan | Detail |
| :--- | :--- |
| **Nama** | Permana Eka Prayoga |
| **NIM** | 24090620005 |
| **Program Studi** | D4 Teknik Elektronika |
| **Mata Kuliah** | Praktek Mikrokontroller |

---

## 🔗 Live Simulation Link
Ingin melihat alat ini bekerja secara langsung? Klik tautan di bawah ini untuk mencoba simulasi interaktifnya:
👉 **[CLICK HERE TO VIEW TINKERCAD SIMULATION](Masukkan_Link_Tinkercad_Kamu_Disini)** 👈

---

## 🔌 Pin Configuration (Wiring Guide)
Berikut adalah konfigurasi pin (*wiring*) yang digunakan pada Arduino Uno. Pastikan semua komponen memiliki jalur *Ground* (GND) yang saling terhubung (*Common Ground*).

| Komponen | Pin Arduino | Keterangan / Fungsi |
| :--- | :---: | :--- |
| **Slide Switch** | `D2` | Sakelar Utama (ON/OFF) |
| **Potensiometer** | `A0` | Input Analog untuk mengatur Speed |
| **L293D (EN1)** | `D10` | Sinyal PWM untuk mengatur kecepatan putaran |
| **L293D (IN1)** | `D8` | Logika arah putaran motor |
| **L293D (IN2)** | `D7` | Logika arah putaran motor |
| **Motor Servo** | `D9` | Sinyal PWM untuk mengayunkan (*swing*) |
| **LED Merah** | `D12` | Indikator Power (Menyala saat ON) |
| **LCD I2C (SDA)** | `A4` | Jalur Data Komunikasi I2C |
| **LCD I2C (SCL)** | `A5` | Jalur Clock Komunikasi I2C |

---

## ✨ Key Features
* **🎚️ Single-Switch Operation:** Toggle the entire system ON/OFF menggunakan sakelar geser.
* **⚙️ Variable Speed (PWM):** Penyesuaian RPM *real-time* via potensiometer.
* **🔄 Auto-Swing Mechanism:** Servo mikro mengayun otomatis (50° hingga 130°) dan kembali ke tengah saat dimatikan.
* **📊 Live LCD Dashboard:** Menampilkan status daya dan persentase kecepatan secara langsung.
