#include <Servo.h>
int joyX=0;
int angl=0;
Servo myservo;

void setup()
{
  myservo.attach(9);
  pinMode(joyX,INPUT);
  Serial.begin(9600);
}

void loop()
{
  int val = (analogRead(joyX)/64)-8;
  if (val > 0) {
    angl=angl+abs(val);
  }
  else {
    if (val < 0) {
    angl=angl-abs(val);}
  }
  if (angl < 0) angl = 0;
  if (angl > 180) angl = 180;
  Serial.print("Power: ");
  Serial.println(val);
  Serial.print("Angle: ");
  Serial.println(angl);
  myservo.write(angl);
  int spd = 500;
  if (val != 0) {
    spd = 600/abs(val);
  }
  
  Serial.print("Speed: ");
  Serial.println(spd);
  Serial.println("-----------");
  delay(spd);
}
