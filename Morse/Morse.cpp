/*
  Morse.cpp - Library for flashing Morse code.
  Based on Morse.cpp created by David A. Mellis, November 2, 2007.
  Released into the public domain.
*/

#include "Arduino.h"
#include "Morse.h"

int baseUnit   = 150;       // control the base unit (usually one tick)
int dotUnit    = baseUnit;
int dashUnit   = baseUnit * 3;

int lettersGap = baseUnit * 3;
int wordsGap   = baseUnit * 7;

Morse::Morse(int pin) {
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void Morse::dot() {
  blink(dotUnit, baseUnit);
}

void Morse::dash() {
  blink(dashUnit, baseUnit);
}

void blink(int up, int down) {
  digitalWrite(_pin, HIGH);
  delay(up);
  digitalWrite(_pin, LOW);
  delay(down);
}