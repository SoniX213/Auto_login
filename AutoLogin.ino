#include "DigiKeyboard.h"

//Defining Keys
#define KEY_TAB       0x2B

void digiBegin() {
  DigiKeyboard.sendKeyStroke(0,0);
  DigiKeyboard.delay(50);
}


void setup() {
DigiKeyboard.sendKeyStroke(0);  
DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_SPACE);
DigiKeyboard.delay(500);
DigiKeyboard.print("Username-goes-here");
DigiKeyboard.sendKeyStroke(KEY_TAB);
DigiKeyboard.print("Password-goes-here");
DigiKeyboard.delay(5000);
DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
DigiKeyboard.delay(5000);
DigiKeyboard.print("https://www.youtube.com/watch?v=zoOcAfYBmo4"); //Starts playing chillstep from ambition
DigiKeyboard.sendKeyStroke(KEY_ENTER);

}


void digiEnd() {
  const int led=1;
  pinMode(led, OUTPUT);
  while (1) {
    digitalWrite(led, !digitalRead(led));
    DigiKeyboard.delay(1000);
  }
}


void loop() {
  // put your main code here, to run repeatedly:
  

}
