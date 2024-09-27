// encode each character of the input string to morse code

#ifndef MORSE_H
#define MORSE_H
#include "Arduino.h"
#include "alph.h"
#include "beeps.h"
#include <string.h>

extern const int speed;

void parseMorseCode(char* string, int message_length){
  for (int i = 0; i < message_length; i++){
    char letter = toupper(string[i]);

    if (letter == ' '){
      delay(1000/speed); // just pause if the character is a space
      continue;
    }

    if (letter < 'A' || letter > 'Z') {
      continue; // Skip invalid characters
    }
    
    // play the corresponding "beep" for each letter (all functions defined in alph.h)
    switch(letter){
      case 'A':
        A();
        delay(400/speed);

        break;

      case 'B':
        B();
        delay(400/speed);

        break;

      case 'C':
        C();
        delay(400/speed);
        break;

      case 'D':
        D();
        delay(400/speed);

        break;

      case 'E':
        E();
        delay(400/speed);

        break;
        
      case 'F':
        Fc();
        delay(400/speed);

        break;

      case 'G':
        G();
        delay(400/speed);

        break;

      case 'H':
        H();
        delay(400/speed);

        break;

      case 'I':
        I();
        delay(400/speed);

        break;

      case 'J':
        J();
        delay(400/speed);

        break;

      case 'K':
        K();
        delay(400/speed);

        break;

      case 'L':
        L();
        delay(400/speed);

        break;

      case 'M':
        M();
        delay(400/speed);

        break;
      
      case 'N':
        N();
        delay(400/speed);

        break;

      case 'O':
        O();
        delay(400/speed);

        break;

      case 'P':
        P();
        delay(400/speed);

        break;

      case 'Q':
        Q();
        delay(400/speed);

        break;

      case 'R':
        R();
        delay(400/speed);

        break;

      case 'S':
        S();
        delay(400/speed);

        break;

      case 'T':
        T();
        delay(400/speed);

        break;

      case 'U':
        U();
        delay(400/speed);

        break;

      case 'V':
        V();
        delay(400/speed);

        break;

      case 'W':
        W();
        delay(400/speed);

        break;

      case 'X':
        X();
        delay(400/speed);

        break;

      case 'Y':
        Y();
        delay(400/speed);

        break;

      case 'Z':
        Z();
        delay(400/speed);

        break;
    }
  }
}

#endif
