#include <Servo.h>

int val;
int position;
Servo myservo;// define servo variable name

void setup()
{
  myservo.attach(7);// select servo pin(9 or 10)
  myservo.write(90);
}
void loop()
{
  /*val=Serial.read();
  myservo.write(val);// set rotate angle of the motor
  position = servo.read();*/

  for(position = 0; position < 180; position += 1)  // от 0 до 180 градусов
  {                                  // с шагом в 1 градус 
    myservo.write(position);              // 
    delay(15);                       // ждём 15ms пока серва займёт новое положение
  } 
  for(position = 180; position>=1; position-=1)     // от 180 до 0 градусов
  {                                
    myservo.write(position);               
    delay(15);                       
  }
}
