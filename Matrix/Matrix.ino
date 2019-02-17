// Мигание поочередно светодиодами на всех пинах

const int p2 = 2;
const int p3 = 3;
const int p4 = 4;
const int p5 = 5;
const int p6 = 6;
const int p7 = 7;
const int p8 = 8;
const int p9 = 9;
const int p10 = 10;
const int p11 = 11;
const int Interval = 100;

void setup() {
  pinMode(p2, OUTPUT);
  pinMode(p3, OUTPUT);
  pinMode(p4, OUTPUT);
  pinMode(p5, OUTPUT);
  pinMode(p6, OUTPUT);
  pinMode(p7, OUTPUT);
  pinMode(p8, OUTPUT);
  pinMode(p9, OUTPUT);
  pinMode(p10, OUTPUT);
  pinMode(p11, OUTPUT);
}

void loop() {
  digitalWrite(p2, 1);
  delay (Interval);
  digitalWrite(p3, 1);
  delay (Interval);
  digitalWrite(p4, 1);
  delay (Interval);
  digitalWrite(p5, 1);
  delay (Interval);
  digitalWrite(p6, 1);
  delay (Interval);
  digitalWrite(p7, 1);
  delay (Interval);
  digitalWrite(p8, 1);
  delay (Interval);
  digitalWrite(p9, 1);
  delay (Interval);
  digitalWrite(p10, 1);
  delay (Interval);
  digitalWrite(p11, 1);
  delay (Interval);
  digitalWrite(p2, 0);
  delay (Interval);
  digitalWrite(p3, 0);
  delay (Interval);
  digitalWrite(p4, 0);
  delay (Interval);
  digitalWrite(p5, 0);
  delay (Interval);
  digitalWrite(p6, 0);
  delay (Interval);
  digitalWrite(p7, 0);
  delay (Interval);
  digitalWrite(p8, 0);
  delay (Interval);
  digitalWrite(p9, 0);
  delay (Interval);
  digitalWrite(p10, 0);
  delay (Interval);
  digitalWrite(p11, 0);
  delay (Interval);

  /*digitalWrite(p11, 0);
  digitalWrite(p2, 1);
  delay (Interval);
  digitalWrite(p2, 0);
  digitalWrite(p3, 1);
  delay (Interval);
  digitalWrite(p3, 0);
  digitalWrite(p4, 1);
  delay (Interval);
  digitalWrite(p4, 0);
  digitalWrite(p5, 1);
  delay (Interval);
  digitalWrite(p5, 0);
  digitalWrite(p6, 1);
  delay (Interval);
   digitalWrite(p6, 0);
  digitalWrite(p7, 1);
  delay (Interval);
  digitalWrite(p7, 0);
  digitalWrite(p8, 1);
  delay (Interval);
  digitalWrite(p8, 0);
  digitalWrite(p9, 1);
  delay (Interval);
  digitalWrite(p9, 0);
  digitalWrite(p10, 1);
  delay (Interval);
  digitalWrite(p10, 0);
  digitalWrite(p11, 1);
  delay (Interval);*/
}
