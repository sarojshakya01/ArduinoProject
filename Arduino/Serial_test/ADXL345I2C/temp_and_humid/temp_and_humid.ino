#include <LiquidCrystal.h>
int sensorPin0 = A0;   // select the input pin for the potentiometer
int sensorPin1 = A1;
int sensorPin2 = A3;
int sensorValue0 = 0;  // variable to store the value coming from the sensor
int sensorValue1 = 0;
int sensorValue2 = 0;

LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop() {
  sensorValue0 = analogRead(sensorPin0);    
  sensorValue1 = analogRead(sensorPin1);
  sensorValue2 = analogRead(sensorPin2);
  lcd.setCursor(0, 1);
  lcd.print(sensorValue0);
  lcd.setCursor(0, 5);
  lcd.print(sensorValue1);
  lcd.setCursor(0, 10);
  lcd.print(sensorValue2);
  sprintf(output, "%d %d %d",sensorValue0,ensorValue0,ensorValue0);
  Serial.print(output);
  Serial.write(10);
}
