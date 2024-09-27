#include "morse.h"

const int buzzer = 12;
const int speed = 2;
bool on = true;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT);
}

void loop() {
  char message[] = "jadia";
  int message_length = strlen(message);

  // put your main code here, to run repeatedly:
  if (on){
    parseMorseCode(message, message_length);
    on = false;
  }

}
