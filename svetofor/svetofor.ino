#include <Stepper.h>
#define STEPS 2000
Stepper stepper(STEPS, 8, 9, 10, 11);
int previous = 0;

const int Interval = 5;
const int ColorGreen = 2;
const int ColorYellow = 3;
const int ColorRed = 4;

void setup() {
  pinMode(ColorGreen, OUTPUT);
  pinMode(ColorYellow, OUTPUT);
  pinMode(ColorRed, OUTPUT);

  stepper.setSpeed(10);
}

void loop() {
  /*int val = analogRead(0);
stepper.step(val - previous);
previous = val;*/

  digitalWrite(ColorRed, LOW);
  digitalWrite(ColorYellow, LOW);
  digitalWrite(ColorGreen, HIGH);
  delay (Interval*1000);
  
  digitalWrite(ColorGreen, LOW);
  digitalWrite(ColorYellow, HIGH);
  digitalWrite(ColorRed, LOW);
  delay (2*1000);
  
  digitalWrite(ColorYellow, LOW);
  digitalWrite(ColorGreen, LOW);
  digitalWrite(ColorRed, HIGH);
  stepper.step(500);
  delay (Interval*1000);
  
  digitalWrite(ColorGreen, LOW);
  digitalWrite(ColorYellow, HIGH);
  digitalWrite(ColorRed, LOW);
  stepper.step(-500);
  delay (2*1000);


  
}
