void setup() {
  Serial.begin(9600);
  //Serial.print("123432");
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {

  digitalWrite(LED_BUILTIN, LOW);
  
  if (Serial.available()>0) {

    Serial.println("start");

    int in_data = Serial.parseInt();

    Serial.println(in_data);

    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000*in_data);
    digitalWrite(LED_BUILTIN, LOW);

    Serial.println("stop");
  }
}
