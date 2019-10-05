int pinLedArduino = 13;  // LED on Pin 13 of Arduino
int pinMotionSensor = 7; // Input for motion Sensor HC-S501
int valMotionSensor; // value from motion Sensor

const int ledOnTime = 1000; // Время, в течение которого светодиод остается включенным, после обнаружения движения (в миллисекундах, 1000 мс = 1 с)
const int trigDistance = 50; // Расстояние (и меньшее значение) при котором срабатывает датчик (в сантиметрах)

int duration;
int distance;

void setup() {
  Serial.begin(9600);
  
  pinMode(pinLedArduino, OUTPUT);
  pinMode(pinMotionSensor, INPUT);
  
  digitalWrite(pinLedArduino, 0);
}

void loop() {
  valMotionSensor = digitalRead(pinMotionSensor);
  
  digitalWrite(pinLedArduino, valMotionSensor);
  Serial.println(valMotionSensor);

  if(state == 1) {
    Serial.println(state+"Somebody is in this area!");
    digitalWrite(echoPin, 1);
  } else if(state == 0) {
    Serial.println(state+"No one!");
    digitalWrite(echoPin, 0);
  }
  
  delay(500);

  // version 2
  digitalWrite(trigPin, LOW);
  digitalWrite(trigPin, HIGH);
  delay(1);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
 
  if (distance <= trigDistance) {
    digitalWrite(ledPin, HIGH);
    delay(ledOnTime);
    digitalWrite(ledPin, LOW);
  }
  delay(100);
}
