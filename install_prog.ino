#include "DigiKeyboard.h"

void setup() {
  // don't need to set anything up to use DigiKeyboard
}


void loop() {
  
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  
  DigiKeyboard.println("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(4500);

  DigiKeyboard.println("winget install notepad++");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  
  for(;;){
  
  }
}
