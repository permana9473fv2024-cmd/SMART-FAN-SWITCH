# SMART-FAN-SWITCH
For this project, I built an interactive Smart Fan prototype using an Arduino Uno. The main idea was to reverse-engineer how a standard desk fan works and upgrade it with precise digital control. Instead of using those clunky 3-speed mechanical buttons, I designed the system to use a single slide switch for the main power and a rotary potentiometer for real-time speed adjustment.

For the main drive, I used a DC gear motor hooked up to an L298N motor driver module. The Arduino reads the analog input from the pot and maps it into a PWM signal. This signal is fed to the L298N's Enable pin to control the motor's duty cycle, which gives a really smooth transition from a slow breeze all the way up to max RPM.

To make it act like a real fan, I added an auto-swing feature using a micro servo. As soon as you flip the switch ON, the servo starts panning left and right. I hardcoded the sweep angle to stay strictly between 50 and 130 degrees so the airflow stays focused up front, rather than doing a full 180 sweep. When you turn the switch OFF, the microcontroller immediately kills the PWM signal to the DC motor and auto-centers the servo back to 90 degrees before entering standby mode.

For the visual interface, I wired up a 16x2 LCD with an I2C backpack to save on wiring pins. It works as a live dashboard showing the current power status and the speed percentage. Overall, the build effectively demonstrates how to tie together analog sensor readings, electro-mechanical actuators, and I2C communication into a single, automated embedded system.
