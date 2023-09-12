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



//Q1. Write a code for ATmega-328P Microcontroller to make buzzer ringing after 10 times of led blinking.

int led=13, buzz=12, i=0;
void setup() {
  pinMode (led,OUTPUT);
  pinMode (buzz, OUTPUT);
}

void loop() {
for (i=0; i<10; i++)
{
  digitalWrite (led, HIGH);
  delay (500);
  digitalWrite (led,LOW);
  delay(500);
}
digitalWrite(buzz,HIGH);
delay(1000);
digitalWrite(buzz,LOW);
delay(500);
}
