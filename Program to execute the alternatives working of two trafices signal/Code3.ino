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


//Q3 Write an Arduino Program to execute the alternatives working of two trafices signal.

int R1 = 13, G1 = 12, G2=11, R2 = 10;
void setup () 
{
pinMode (R1, OUTPUT);
pinMode (R2, OUTPUT);
pinMode (G1, OUTPUT);
pinMode (G2, OUTPUT);
}
void loop () 
{
  // R1 and R2 on for 5 second
  digitalWrite(R1,HIGH);
  digitalWrite(R2,HIGH);
  delay (5000);

  //R1 off and G1 on for 5 second
  digitalWrite (R1, HIGH);
  digitalWrite (G1, HIGH);
  delay(1000);

  //G1 off G2 on R1 on R2 off for 5 second
  digitalWrite(G1, LOW);
  digitalWrite(G2, HIGH);
  digitalWrite(R1, HIGH);
  digitalWrite(R2, LOW);
  delay (5000);

  //G1 on G2 off R1 off R2 on for 5 second
  digitalWrite(G1, HIGH);
  digitalWrite(G2, LOW);
  digitalWrite(R1, LOW);
  digitalWrite(R2, HIGH);
  delay (5000);
}
