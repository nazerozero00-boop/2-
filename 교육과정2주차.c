const int ledPin = 2;
const int buttonPin = 3;

void setup() {
    pinMode(ledPin, OUTPUT);
    pinMode(buttonPin, INPUT);
}

void loop() {
    if (digitalRead(buttonPin) == LOW)
    {
        digitalWrite(ledPin, HIGH);
        delay(1000);
        digitalWrite(ledPin, LOW);
        delay(1000);
    }

    else
    {
        digitalWrite(ledPin, LOW);
    }
}