
unsigned char relayPin[4] = {7, 6, 5, 4};

const int buttonPin = 2;
const int ledPin =  1;
int buttonState = 0;

void setup() {
  int i;
  for (i = 0; i < 4; i++)
  {
    pinMode(relayPin[i], OUTPUT);
  }
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
    int i = 0;
    for (i = 0; i < 4; i++)
    {
      delay(250);
      digitalWrite(relayPin[i], HIGH);
    }
    delay(1500);
    for (i = 0; i < 4; i++)
    {
      digitalWrite(relayPin[i], LOW);
    }
  } else {
    digitalWrite(ledPin, LOW);
  }
}
