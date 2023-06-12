#include "DigiKeyboard.h"

void setup() {
  // put your setup code here, to run once:
    DigiKeyboard.delay(5000);

  // Search for Safari, open it, and type the URL
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT);  // Activate Spotlight search
  DigiKeyboard.delay(500);
  DigiKeyboard.print("Safari");  // Type "Safari" to search for the application
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);  // Press Enter to open Safari
  DigiKeyboard.delay(3000);  // Wait for Safari to open
  DigiKeyboard.print("https://www.youtube.com/watch?v=PGNiXGX2nLU");  // Type the URL
  DigiKeyboard.sendKeyStroke(KEY_ENTER);  // Press Enter to load the URL
}

void loop() {
  // Wait for a few seconds after plugging in
}