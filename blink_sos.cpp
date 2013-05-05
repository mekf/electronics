// usually pin 13 on most Arduino board
int ledPin = 13;

int baseUnit   = 150;       // control the base unit (usually one tick)
int dotUnit    = baseUnit;
int dashUnit   = baseUnit * 3;

int lettersGap = baseUnit * 3;
int wordsGap   = baseUnit * 7;

// the setup routine runs once after reset is pressed
void setup() {
  // initialize the digital pin as an output.                 
  pinMode(ledPin, OUTPUT);
}

void loop() {
  blinkS();
  blinkO();
  blinkS();
  delay(wordsGap);
}

void blinkS() {
  dot(); dot(); dot();
  delay(lettersGap);
}

void blinkO() {
  dash(); dash(); dash();
  delay(lettersGap);
}

void dot() {
  morseBlink(dotUnit, baseUnit);
}

void dash() {
  morseBlink(dashUnit, baseUnit);
}

void morseBlink(int up, int down) {
  digitalWrite(ledPin, HIGH);
  delay(up);      // the duration the LED will stay up
  digitalWrite(ledPin, LOW);
  delay(down);    // the duration the LED will stay down
}