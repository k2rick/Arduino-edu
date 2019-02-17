#include<Servo.h>
Servo servo1; // основание
Servo servo2; // захват
Servo servo3; // 
Servo servo4; // 

const uint8_t pinS1=16; // основание
const uint8_t pinS2=10; // захват
//const uint8_t pinS3=15; // 
//const uint8_t pinS4=10; // 

int valS1 = 100;
int valS2 = 200;

char a = 0;
long b = 0;
boolean End, minus = 0;


void setup() {
  // put your setup code here, to run once:

    Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

    //servo1.write(valS1);

    //servo2.write(valS2);

if(Serial.available()){
    delay(2);
    a = Serial.read();
    if(a == 45){
      minus = 1;
    }
    if(a >= 48 && a <= 57){
      b += a - 48;
      b *= 10;
      End = 1;
    }
  }

    Serial.println((String)"\ts1="+a+",\ts2="+b);

    delay(1);

}
