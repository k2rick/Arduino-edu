int led = 8;
int led2 = 13;

void setup()
{
    pinMode(led, OUTPUT);
    pinMode(led2, OUTPUT);
}

void loop()
{
    digitalWrite(led, 1);
    digitalWrite(led2, 1);
    delay(1000);
    digitalWrite(led, 0);
    digitalWrite(led2, 0);
    delay(1000);
}
