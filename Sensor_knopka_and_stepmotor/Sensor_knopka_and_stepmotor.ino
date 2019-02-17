#include <Stepper.h>

// когда Sig Output в high, тач сенсор нажат
#define ctsPin 10 // пин для емкостного датчика касания

int ledPin = 13; // пин для светодиода

const int IN1 = 8;
const int IN2 = 9;
const int IN3 = 10;
const int IN4 = 11;

const int stepsPerRevolution = 32; // шагов за один оборот

Stepper myStepper(stepsPerRevolution, IN1, IN2, IN3, IN4);

void setup() {
    Serial.begin(9600);
    pinMode(ledPin, OUTPUT);
    pinMode(ctsPin, INPUT);

    myStepper.setSpeed(5); // скорость 5 об/минуту
}

void loop() {
    /*int ctsValue = digitalRead(ctsPin);
    if (ctsValue == HIGH){
        digitalWrite(ledPin, HIGH);
        Serial.println("TOUCHED");
    } else{
        digitalWrite(ledPin,LOW);
        Serial.println("not touched");
    }
    delay(500);*/

    //myStepper.step(stepsPerRevolution); // шаг в одном направлении
    stepper.step(500);
    delay(500);
 
    Serial.println("counterclockwise");
    //myStepper.step(-stepsPerRevolution); // шаг в обратную сторону
    stepper.step(-500);
    delay(500); 
}
