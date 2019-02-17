int xPin = A1;
int yPin = A0;
int buttonPin = 2;
int xPosition = 0;
int yPosition = 0;
int buttonState = 0;
void setup() {
  // инициализация обмена данными по серийному протоколу со скоростью 9600 bps:
  Serial.begin(9600);
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);

  // активируем подтягивающий резистор на пине кнопки
  pinMode(buttonPin, INPUT_PULLUP);
  
  // Для более ранних версий Arduino (меньше 1.0.1)
  // pinMode(buttonPin, INPUT);
  // digitalWrite(buttonPin, HIGH);
}

void loop() {
  xPosition = analogRead(xPin);
  yPosition = analogRead(yPin);
  buttonState = digitalRead(buttonPin);
  Serial.print("X: ");
  Serial.print(xPosition);
  Serial.print(" | Y: ");
  Serial.print(yPosition);
  Serial.print(" | Button: ");
  Serial.println(buttonState);
  delay(100); // добавляем задержку между считыванием данных
}
