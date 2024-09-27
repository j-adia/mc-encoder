// source file
#include "morse.h"

const int buzzer = 12;
const int speed = 2;
bool on = true;

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  char message[] = "hello world";
  int message_length = strlen(message);
  
  if (on){
    parseMorseCode(message, message_length);
    on = false;
  }

}
