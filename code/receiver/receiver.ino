#include <Keyboard.h>

#define BTN_RO  8
#define BTN_LO  7

char altKey = KEY_LEFT_ALT;
char s = 83;

char button12Pressed = false;
char button13Pressed = false;

 
void setup(){
  Serial.begin(9600);
  pinMode(BTN_RO, INPUT);
  pinMode(BTN_LO, INPUT);
  //pinMode(11, INPUT);
  //pinMode(10, INPUT);
  Keyboard.begin();
}

void loop(){
  
 if (digitalRead(BTN_RO) == HIGH) {
    button13Pressed = true;
    delay(10);
 } else {
  if (button13Pressed == true) {
    Keyboard.press(altKey);
    Keyboard.press('s');
    delay(100);
    Keyboard.releaseAll();
    Serial.println("Rechts Onder");
    button13Pressed = false;    
    
  }
 }

 if (digitalRead(BTN_LO) == HIGH) {
    button12Pressed = true;
    delay(10);
 } else {
  if (button12Pressed == true) {
    Serial.println("Links Onder");
    button12Pressed = false;    
    
  }
 }
}


 
/*
 if (digitalRead(12) == LOW 
  
  }
    delay(1000);
    // new document:
    Keyboard.press(altKey);
    Keyboard.press('s');
    delay(100);
    Keyboard.releaseAll(); 
  
*/


//ßßßßßßßßßßßßß
