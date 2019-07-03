byte sensorPin = 3;
byte indicator = 13;
const int echoPin = 8;

void setup()
{
  pinMode(sensorPin,INPUT);
  pinMode(indicator,OUTPUT);
  pinMode(echoPin,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  byte state = digitalRead(sensorPin);
  digitalWrite(indicator,state);
  
  if(state == 1) {
    Serial.println(state+"Somebody is in this area!");
    digitalWrite(echoPin, 1);
  } else if(state == 0) {
    Serial.println(state+"No one!");
    digitalWrite(echoPin, 0);
  }
  
  delay(500);
}
