#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Servo.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); 
Servo swingServo;

// ================= DEKLARASI PIN =================
const int switchPin = 2;     // Sakelar Geser (Slide Switch)
const int potPin = A0;       
const int in1 = 8;           
const int in2 = 7;           
const int enA = 10;          
const int servoPin = 9;      
const int ledPower = 12;     

// Variabel Sistem
int fanSpeed = 0;            
int servoPos = 90;           
int servoStep = 2;           

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("P. Eka Prayoga");
  lcd.setCursor(0, 1);
  lcd.print("Smart Fan Switch");
  delay(2000);
  lcd.clear();

  pinMode(switchPin, INPUT); 
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enA, OUTPUT);
  pinMode(ledPower, OUTPUT);
  
  swingServo.attach(servoPin);
  swingServo.write(90); 

  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  analogWrite(enA, 0);
  digitalWrite(ledPower, LOW);
}

void loop() {
  // BACA POSISI SLIDE SWITCH SECARA LANGSUNG
  bool isPowerOn = digitalRead(switchPin);
  
  // === JIKA SAKELAR POSISI OFF ===
  if (isPowerOn == LOW) {
    digitalWrite(ledPower, LOW); // Lampu Mati
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    analogWrite(enA, 0);         // Motor Mati
    
    swingServo.write(90);        // Leher kipas kembali ke tengah (menghadap depan)

    lcd.setCursor(0, 0);
    lcd.print("Kipas: MATI     ");
    lcd.setCursor(0, 1);
    lcd.print("Geser Sakelar...");
  } 
  
  // === JIKA SAKELAR POSISI ON ===
  else {
    digitalWrite(ledPower, HIGH); // Lampu Menyala

    // 1. Atur Kecepatan Putaran Baling-baling
    fanSpeed = map(analogRead(potPin), 0, 1023, 0, 100);
    int pwmValue = map(fanSpeed, 0, 100, 0, 255);

    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
 f   analogWrite(enA, pwmValue); 

    // 2. Ayunkan Motor Servo (Swing Kanan-Kiri yang lebih realistis)
    swingServo.write(servoPos);
    servoPos += servoStep;
    
    // Batas putar: mentok kanan 130 derajat, mentok kiri 50 derajat
    if (servoPos >= 130 || servoPos <= 50) {
      servoStep = -servoStep; 
    }

    // 3. Update Layar
    lcd.setCursor(0, 0);
    lcd.print("Kipas: NYALA    ");
    lcd.setCursor(0, 1);
    lcd.print("Speed: ");
    lcd.print(fanSpeed);
    lcd.print("%   ");
  }
  
  delay(20); 
}
