// source file
#include "morse.h"

const int buzzer = 12; // buzzer connected to pin 12
const int speed = 2;   // adjust the speed of the message: 1(slower) - 2.7(faster)

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
