#include<Servo.h>
Servo servo1; // Для работы с сервоприводом основания
Servo servo2; // Левого плеча
Servo servo3; // Правого плеча
Servo servo4; // Захвата
int valR1, valR2, valR3, valR4; // Для значений потенциометра

// Потенциометры
const uint8_t pinR1=A1; // основание
const uint8_t pinR2=A2; // левым плечом
const uint8_t pinR3=A3; // правым плечом
const uint8_t pinR4=A0; // захватом

// Сервоприводы
const uint8_t pinS1=16; // основание
const uint8_t pinS2=14; // левого
const uint8_t pinS3=15; // правого
const uint8_t pinS4=10; // захвата

// -- Smoothing --
/*const int numReadings = 10;
int readings[numReadings];      // the readings from the analog input
int readIndex = 0;              // the index of the current reading
int total = 0;                  // the running total
int average = 0;                // the average*/
// -- Smoothing --

// --
int Pot1Max = 0;
int Pot1Min = 1024;
// --

void setup() {
  Serial.begin(9600);
  servo1.attach(pinS1); // Назначаем объекту servo1 управление сервоприводом 1
  servo2.attach(pinS2);
  servo3.attach(pinS3);
  servo4.attach(pinS4);

  /*for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    readings[thisReading] = 0;
  }*/
}

void loop() {
  // subtract the last reading:
  /*total = total - readings[readIndex];
  // read from the sensor:
  readings[readIndex] = analogRead(pinR1);
  // add the reading to the total:
  total = total + readings[readIndex];
  // advance to the next position in the array:
  readIndex = readIndex + 1;

  // if we're at the end of the array...
  if (readIndex >= numReadings) {
    // ...wrap around to the beginning:
    readIndex = 0;
  }

  // calculate the average:
  average = total / numReadings;
  // send it to the computer as ASCII digits
  Serial.println(average);*/

  int Pot1Val = analogRead(pinR1);
    // ищем мах мин отклонений и получаем среднее значение
    if (Pot1Val > Pot1Max) Pot1Max = Pot1Val;
    if (Pot1Val < Pot1Min) Pot1Min = Pot1Val;
     
    Pot1Val = (Pot1Max+Pot1Min)/2;

    // отрабатываем поворот ручки потенциаометра
    if ((Pot1Val-Pot1Min)>5) Pot1Min=Pot1Val; // 5 - фактор сглаживания. Подбирается под конкретные дерганья.
    if ((Pot1Max-Pot1Val)>5) Pot1Max=Pot1Val; // 5 - фактор сглаживания. Подбирается под конкретные дерганья.
    
    Serial.print(Pot1Val);


  
  valR1=map(analogRead(pinR1),0,1024,10,170);
  servo1.write(valR1); // вращаем основанием
  
  valR2=map(analogRead(pinR2),0,1024,40,130);
  servo2.write(valR2); // Управляем левым плечом
  
  valR3=map(analogRead(pinR3),0,1024,60,170);
  servo3.write(valR3); // Управляем правым плечом
  
  valR4=map(analogRead(pinR4),0,1024,10,45);
  servo4.write(valR4); // Управляем захватом
  
  Serial.println((String)"\tA1="+valR1+",\tA2="+valR2+",\tA3="+valR3+",\tA4="+valR4); // Выводим углы
  
  delay(1); // задержка между считываниями для стабильности работы
}
