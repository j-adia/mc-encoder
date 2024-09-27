// encode each letter as a sequence of "beeps"

#ifndef ALPH_H
#define ALPH_H
#include "beeps.h"

void A(){
  beep(1);
  long_beep(1);
}

void B(){
  long_beep(1);
  beep(3);
}

void C(){
  long_beep(1);
  beep(1);
  long_beep(1);
  beep(1);
}

void D(){
  long_beep(1);
  beep(2);
}

void E(){
  beep(1);
}

void Fc(){
  beep(2);
  long_beep(1);
  beep(1);
}

void G(){
  long_beep(2);
  beep(1);
}

void H(){
  beep(4);
}

void I(){
  beep(2);
}

void J(){
  beep(1);
  long_beep(3);
}

void K(){
  long_beep(1);
  beep(1);
  long_beep(1);
}

void L(){
  beep(1);
  long_beep(1);
  beep(2);
}

void M(){
  long_beep(2);
}

void N(){
  long_beep(1);
  beep(1);
}

void O(){
  long_beep(3);
}

void P(){
  beep(1);
  long_beep(2);
  beep(1);
}

void Q(){
  long_beep(2);
  beep(1);
  long_beep(1);
}

void R(){
  beep(1);
  long_beep(1);
  beep(1);
}

void S(){
  beep(3);
}

void T(){
  long_beep(1);
}

void U(){
  beep(2);
  long_beep(1);
}

void V(){
  beep(3);
  long_beep(1);
}

void W(){
  beep(1);
  long_beep(2);
}

void X(){
  long_beep(1);
  beep(2);
  long_beep(1);
}

void Y(){
  long_beep(1);
  beep(1);
  long_beep(2);
}

void Z(){
  long_beep(2);
  beep(2);
}

#endif
