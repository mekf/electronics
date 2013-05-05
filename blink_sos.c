// usually pin 13 on most Arduino board
int ledPin = 13;

// the setup routine runs once after reset is pressed
void setup() {
  // initialize the digital pin as an output.                 
  pinMode(ledPin, OUTPUT);
}

void loop() {
  blinkS();
  delay(300);

  blinkO();
  delay(300);

  blinkS();
  delay(2000);
}

void blinkS() {
  int i;
  for (i = 0; i < 3; i++) {
    digitalWrite(ledPin,HIGH);
    delay(200);
    digitalWrite(ledPin,LOW);
    delay(200);  
  }
}

void blinkO() {
  int i;
  for (i = 0; i < 3; i++) {
    digitalWrite(ledPin,HIGH);
    delay(500);
    digitalWrite(ledPin,LOW);
    delay(200);
  }
}