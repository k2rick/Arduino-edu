void setup() {
  pinMode(A5, INPUT);
  pinMode(12, INPUT_PULLUP);
  pinMode(2, OUTPUT);

//digitalWrite(13, 0);
//digitalWrite(12, 1);
//digitalWrite(A5, 0);

Serial.begin(9600);
  
}

void loop() {
  boolean button1 = digitalRead(A5);
boolean button2 = digitalRead(12);

if(button2 == 1) digitalWrite(2,1); else digitalWrite(2,0);

Serial.print("Button1: "); Serial.print(button1);
Serial.print(", Button2: "); Serial.println(button2);

}
