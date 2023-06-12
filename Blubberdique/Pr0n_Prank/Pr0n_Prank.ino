#include "DigiKeyboard.h"

void setup() {
  // put your setup code here, to run once:
  pinMode(1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(800);
  DigiKeyboard.println("opera");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(4000);
  DigiKeyboard.sendKeyStroke(KEY_N, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
  DigiKeyboard.delay(3000);
  DigiKeyboard.println("https://www.pornhub.com/view_video.php?viewkey=63f4d86aa6099");
  DigiKeyboard.delay(5000);

  // !! OPTIONAL TROLLING

  // DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  // DigiKeyboard.delay(300);
  // DigiKeyboard.println("notepad");
  // DigiKeyboard.delay(300);
  // DigiKeyboard.sendKeyStroke(KEY_ENTER);
  // DigiKeyboard.delay(1000);
  // DigiKeyboard.println("LOL get prank'd fucking scrub");

  // Blink Method
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(100);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(100);
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(100);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(100);
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(100);
  digitalWrite(1, LOW);
}
