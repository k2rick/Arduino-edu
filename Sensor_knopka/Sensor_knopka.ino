// когда Sig Output в high, тач сенсор нажат

#define ctsPin 2 // пин для епкостного датчика касания

int ledPin = 13; // пин для светодиода

void setup() {
    Serial.begin(9600);
    pinMode(ledPin, OUTPUT);
    pinMode(ctsPin, INPUT);
}

void loop() {
    int ctsValue = digitalRead(ctsPin);
    if (ctsValue == HIGH){
        digitalWrite(ledPin, HIGH);
        Serial.println("TOUCHED");
    } else{
        digitalWrite(ledPin,LOW);
        Serial.println("not touched");
    }

    delay(500);
}
