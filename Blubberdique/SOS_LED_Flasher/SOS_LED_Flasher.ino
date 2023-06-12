#include "DigiKeyboard.h"

// Morse flashes appear to be around .delay(150); which is short, and .delay(400); which is long.
// Pauses appear to be fine at .delay(250);

void setup() {
  // If not declared, the flashing light will be very dim. So declare it.
  pinMode(1, OUTPUT);
}

void loop() {
  // Basic setup
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);

  // SOS Blink Method

  // S.
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(150);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(100);
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(150);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(100);
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(150);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(150);

  // O.
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(300);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(100);
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(300);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(100);
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(300);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(150);

  // S.
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(150);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(100);
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(150);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(100);
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(150);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(100);

  // Making the loop wait for a second in total
  DigiKeyboard.delay(500);
}
