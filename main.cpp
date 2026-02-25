#include <Wire.h>
#include <LiquidCrystal_I2C.h>

const int trigPin = 9;  
const int echoPin = 10; 
const int buzzerPin = 8; 

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);

  lcd.init();       
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Parkolo asszisztens");
  delay(2000);   
  lcd.clear();
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);  
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);

  int distance = duration * 0.034 / 2;

  lcd.setCursor(0, 0);
  lcd.print("Tavolsag:       "); 
  lcd.setCursor(10, 0);
  lcd.print(distance);
  lcd.print(" cm");

  if (distance > 100) {
    noTone(buzzerPin); 
  } 
  else if (distance > 50 && distance <= 100) {
    tone(buzzerPin, 1000); 
    delay(100);
    noTone(buzzerPin);
    delay(300); 
  } 
  else if (distance > 10 && distance <= 50) {
    tone(buzzerPin, 1000); 
    delay(50);
    noTone(buzzerPin);
    delay(100); 
  } 
  else if (distance <= 10) {
    tone(buzzerPin, 1000); 
    delay(50); 
  }
  
  delay(50); 
}
