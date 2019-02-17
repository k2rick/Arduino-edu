#include <Servo.h>

int val;
int servoPosition;
Servo myservo;// define servo variable name

int xPin = A1;
int yPin = A0;
int buttonPin = 2;
int xPosition = 0;
int yPosition = 0;
int buttonState = 0;

void setup()
{
  myservo.attach(9);// select servo pin(9 or 10)
  myservo.write(90);

  Serial.begin(9600);
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  
  // djoystic активируем подтягивающий резистор на пине кнопки
  pinMode(buttonPin, INPUT_PULLUP);
}
void loop()
{
  /*val=Serial.read();
  myservo.write(val);// set rotate angle of the motor
  position = servo.read();*/

  /*for(servoPosition = 0; servoPosition < 180; servoPosition += 1)  // от 0 до 180 градусов
  {                                  // с шагом в 1 градус 
    myservo.write(servoPosition);              // 
    delay(15);                       // ждём 15ms пока серва займёт новое положение
  } 
  for(servoPosition = 180; servoPosition>=1; servoPosition-=1)     // от 180 до 0 градусов
  {                                
    myservo.write(servoPosition);               
    delay(15);                       
  }*/

  xPosition = analogRead(xPin);
  yPosition = analogRead(yPin);
  buttonState = digitalRead(buttonPin);
  Serial.print("X: ");
  Serial.print(xPosition);
  Serial.print(" | Y: ");
  Serial.print(yPosition);
  Serial.print(" | Button: ");
  Serial.println(buttonState);
  delay(100); // добавляем задержку между считыванием данных
}
