/*
MIT License

Copyright (c) 2023 Arghyadeep Debnath

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/


//Q3 Write an Arduino Program to rise the alarm if any object is detected at 40cm  and less then the from of sensor

#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int trig = 9, echo = 10, buzz = 8; // Changed "bazz" to "buzz"
long duration; // Changed "direction" to "duration"
int distance;

void setup() {
  pinMode(trig, OUTPUT); // Changed "HIGH" to "OUTPUT"
  pinMode(echo, INPUT);
  pinMode(buzz, OUTPUT);
  lcd.begin(16, 2);
}

void loop() {
  digitalWrite(trig, LOW); // Set the trigger pin LOW initially
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10); // Increased delay to 10 microseconds
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH);
  distance = (duration * 0.034) / 2;

  if (distance <= 40) {
    digitalWrite(buzz, HIGH);
    lcd.print("Thief Catch");
  } else {
    digitalWrite(buzz, LOW);
  }

  delay(1000);
  lcd.clear();
}
