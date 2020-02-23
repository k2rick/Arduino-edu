/*int motion_1 = 2;
int light_1 = 13;

void setup(){
  pinMode (motion_1,INPUT);
  pinMode (light_1, OUTPUT);
}

void loop (){
  digitalWrite (light_1,LOW);
  delay(1000); //this delay is to let the sensor settle down before taking a reading
  int sensor_1 = digitalRead(motion_1);
  if (sensor_1 == HIGH){
    digitalWrite(light_1,HIGH);
    delay(500);
    digitalWrite(light_1,LOW);
    delay(500);

  }
}*/

const int movPin = 2;
const int ledTestPin = 13;
const int relePin = 9

void setup() {
    Serial.begin(9600);
    pinMode(movPin, INPUT);
    pinMode(ledTestPin, OUTPUT);
    pinMode(relePin, OUTPUT);
}

void loop(){
    int val = digitalRead(movPin);

    
    if (val) {
        digitalWrite(ledTestPin, 1);
        digitalWrite(relePin, 1);
        Serial.println("START");
    }
    else {
        digitalWrite(ledTestPin, 0);
        digitalWrite(relePin, 0);
        Serial.println("STOP");
    }

    delay(1000);
}
