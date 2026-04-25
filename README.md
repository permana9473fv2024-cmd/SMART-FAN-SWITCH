# 🌬️ SMART-FAN-SWITCH (Arduino-Based Smart Fan)

![Arduino](https://img.shields.io/badge/-Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white)
![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Status](https://img.shields.io/badge/Status-Completed-success?style=for-the-badge)

An interactive Smart Fan prototype using an Arduino Uno. The main idea was to reverse-engineer how a standard desk fan works and upgrade it with precise digital control. This project was simulated via Tinkercad and built for university coursework.

---

## 👨‍🎓 Identitas Mahasiswa
| Keterangan | Detail |
| :--- | :--- |
| **Nama** | Permana Eka Prayoga |
| **NIM** | 24090620005 |
| **Program Studi** | D4 Teknik Elektronika |
| **Mata Kuliah** | Praktek Mikrokontroller |

---

## 📸 Simulation Preview
*(You can watch the full simulation in the `Video_Tinkercad.mp4` file included in this repository).*

![Circuit Design](./Gambar%20Rangkaian) 
> **Note:** If the image doesn't load, make sure the image file is correctly placed in the `Gambar Rangkaian` folder.

---

## ✨ Key Features
* **🎚️ Single-Switch Operation:** Toggle the entire system ON/OFF using a single slide switch.
* **⚙️ Variable Speed (PWM):** Real-time RPM adjustment via a rotary potentiometer for smooth transitions from a slow breeze to max RPM.
* **🔄 Auto-Swing Mechanism:** A micro servo automatically pans left and right (restricted between 50° and 130° for focused front airflow). Auto-centers when turned off.
* **📊 Live LCD Dashboard:** A 16x2 I2C LCD displays the real-time power status (NYALA/MATI) and the current speed percentage.

---

## 🛠️ Hardware Components
To replicate this project physically or in a simulator, you will need:
1. Arduino Uno R3
2. L293D Motor Driver IC (or L298N Module)
3. DC Gear Motor (Fan Blade Actuator)
4. Micro Servo Motor (Swing Actuator)
5. 16x2 LCD Display with I2C Backpack
6. Slide Switch (SPDT) & Potentiometer
7. Red LED + 220Ω Resistor
8. External Power Supply (e.g., Dual Output Power Supply for Logic and Motors)

---

## 📁 Repository Contents
This repository contains all the necessary files to understand, replicate, and run the Smart Fan simulation:

* 📄 **`Code.ino`** : The main C++ source code for the Arduino microcontroller.
* 📄 **`Brave Kasi.pdf`** : The complete schematic diagram of the circuit.
* 📊 **`Komponen Rangkaian.xlsx`** : Bill of Materials (BOM) detailing all hardware components used.
* 🎥 **`Video_Tinkercad.mp4`** : A video demonstration of the circuit working in the Tinkercad simulator.
* 🖼️ **`Gambar Rangkaian`** : Directory/File containing screenshots of the circuit wiring.
* 🔗 **`Link`** : Direct link to the live Tinkercad simulation workspace.

---

## 🚀 How to Use / Simulate
1. Open the `.ino` file in the Arduino IDE to view the source code.
2. If you want to test the simulation, open the provided Tinkercad `Link`.
3. Start the simulation.
4. Slide the switch to turn the system ON.
5. Rotate the potentiometer to see the DC Motor's RPM change and watch the servo sweep!
