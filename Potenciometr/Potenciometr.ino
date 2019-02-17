// даём имена пинов со светодиодом и потенциометром
#define led 9
#define pot A0
int valR1;
void setup()
{
  Serial.begin(9600);
  // пин со светодиодом — выход
  pinMode(led, OUTPUT);
  // пин с потенциометром - вход
  pinMode(pot, INPUT);
}
void loop()
{
  // объявляем переменную x
  int x;
  // считываем напряжение с потенциометра:
  // будет получено число от 0 до 1023
  // делим его на 4, получится число в диапозоне
  // 0-255 (дробная часть будет отброшена)
  //x = analogRead(pot) / 4;
  x = analogRead(pot);
  Serial.println(x);
  // выдаём результат на светодиод
  //analogWrite(led, x);
}
