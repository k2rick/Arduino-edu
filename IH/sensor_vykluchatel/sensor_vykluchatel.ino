int s1 = 8;
int testPin = 13;
int m = 0;
int position = 0;
void setup() {
  Serial.begin(9600);
  pinMode(s1, INPUT);
  pinMode(testPin, OUTPUT);
}
void loop() {
  m = digitalRead(s1);
  Serial.println(m);
  if (m != 0) {
    if (position == 0) {
      position = 1;
      digitalWrite(testPin, HIGH);
    } else {
      position = 0;
      digitalWrite(testPin, LOW);
    }  
  }
  Serial.println(position);
}
