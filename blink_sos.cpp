// usually pin 13 on most Arduino board
int ledPin = 13;

// the setup routine runs once after reset is pressed
void setup() {
  // initialize the digital pin as an output.                 
  pinMode(ledPin, OUTPUT);
}

void loop() {
  blinkS();
  blinkO();
  blinkS();
  delay(1500);
}

void blinkS() {
  dot(); dot(); dot();
  delay(200);
}

void blinkO() {
  dash(); dash(); dash();
  delay(200);
}

void dot() {
  morseBlink(150, 150);
}

void dash() {
  morseBlink(450, 150);
}

void morseBlink(int up, int down) {
  digitalWrite(ledPin, HIGH);
  delay(up);      // the duration the LED will stay up
  digitalWrite(ledPin, LOW);
  delay(down);    // the duration the LED will stay down
}