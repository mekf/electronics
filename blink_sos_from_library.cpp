// Initialise the led Pin in Morse Library
Morse morse(13);

void setup() {
}

void loop() {
  blinkS();
  blinkO();
  blinkS();
  delay(1000);
}

void blinkS() {
  morse.dot(); morse.dot(); morse.dot();
  delay(1000);
}

void blinkO() {
  morse.dash(); morse.dash(); morse.dash();
  delay(1000);
}