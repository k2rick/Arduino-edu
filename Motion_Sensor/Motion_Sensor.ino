const int trigPin = 12; // Цифровой выход для подключения TRIG
const int echoPin = 11; // Цифровой выход для подключения ECHO
const int ledOnTime = 1000; // Время, в течение которого светодиод остается включенным, после обнаружения движения (в миллисекундах, 1000 мс = 1 с)
const int trigDistance = 50; // Расстояние (и меньшее значение) при котором срабатывает датчик (в сантиметрах)
const int ledPin = 8; 

int duration;
int distance;
 
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}
 
void loop() {
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
