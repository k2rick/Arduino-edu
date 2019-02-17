const int Relay = 4;
const int GerkonPin = 9;
int GerkonVar = 0; // переменная для хранения состояния датчика
int ReleyVar = 0;

void setup() {
  pinMode(GerkonPin, INPUT);
  pinMode(Relay, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
GerkonVar = digitalRead(GerkonPin);

Serial.println(GerkonVar);
//Serial.print(ReleyVar);

if (GerkonVar == 0) {
  //if (ReleyVar == 0) {
    //digitalWrite(Relay, HIGH);
    //ReleyVar = 1;
  //}
} else {
  //if (ReleyVar == 1) {
    //digitalWrite(Relay, LOW);
    //ReleyVar = 0;
  //}
}

//delay(100);

  /*digitalWrite(trigPin, LOW);
  //digitalWrite(trigPin, HIGH);
  //delay(1);
  //digitalWrite(trigPin, LOW);
  //duration = pulseIn(echoPin, HIGH);
  //distance = duration * 0.034 / 2;*/
 
  /*if (distance <= trigDistance) {
    //digitalWrite(ledPin, HIGH);
    digitalWrite(Relay, HIGH);
    delay(ledOnTime);
    digitalWrite(Relay, LOW);
  }
  delay(100);*/
}
