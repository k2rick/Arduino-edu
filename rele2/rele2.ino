// Реле модуль подключен к цифровому выводу 4
int Relay = 4;

void setup()
{
  pinMode(Relay, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(Relay, LOW);   // реле включен
  Serial.println(0);
  delay(2000);
  digitalWrite(Relay, HIGH);  // реле выключено
  Serial.println(1);
  delay(2000);
}
