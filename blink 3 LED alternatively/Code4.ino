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


//Q3 Write an Arduino Program to blink 3 LED alternatively

int led1=11, led2=12, led3 = 13;
void setup () 
{
  pinMode (led1, OUTPUT);
  pinMode (led2, OUTPUT);
  pinMode (led3, OUTPUT);
}
void loop () 
{
  digitalWrite (led1, HIGH);
  delay(200);
  digitalWrite(led1, LOW);
  delay(200);
  digitalWrite (led2, HIGH);
  delay(200);
  digitalWrite(led2, LOW);
  delay(200);
  digitalWrite (led3, HIGH);
  delay(200);
  digitalWrite(led3, LOW);
  delay(200);
  

}
