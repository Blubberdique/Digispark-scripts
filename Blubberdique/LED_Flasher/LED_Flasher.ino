#include "DigiKeyboard.h"

// Morse flashes appear to be around .delay(150); which is short, and .delay(300); which is long.
// Pauses appear to be fine at .delay(100);

void setup() {
  // This line declares that LED A (1) is bound to emit light when called upon
  // with the "digitalWrite" method, where HIGH declares it to emit light and
  // LOW declares it to turn off.
  pinMode(1, OUTPUT); 
}

void loop() {
  // Starts off with the basic, to make sure the PC grabs the USB and allows time to run the script
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);

  // Fast Blink Method
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(150);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(150);
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(150);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(150);
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(150);
  digitalWrite(1, LOW);

  // Interval between methods
  DigiKeyboard.delay(500);

  // Intermediate Blink Method
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(250);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(250);
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(250);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(250);
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(250);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(250);

  // Interval between methods
  DigiKeyboard.delay(500);

  // Slow Blink Method
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(350);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(350);
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(350);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(350);
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(350);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(350);

  // Interval between methods
  DigiKeyboard.delay(500);

  // Long flash, short interval
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(600);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(150);
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(600);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(150);
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(600);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(150);

  // TITS Blink Method
  // Code here...
}