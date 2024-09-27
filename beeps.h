#ifndef BEEPS_H
#define BEEPS_H

extern const int buzzer;
extern const int speed;

// pause between beeps
void pause(){
  delay(270/speed);
}

// beep (.)
void beep(int num_beeps){
    for (int i = 0; i < num_beeps; i++){
        digitalWrite(buzzer, HIGH);
        delay(130/speed);
        digitalWrite(buzzer, LOW);
        delay(130/speed);
    }
    pause();
}

// long beep (_)
void long_beep(int num_beeps){
    for (int i = 0; i < num_beeps; i++){
        digitalWrite(buzzer, HIGH);
        delay(270/speed);
        digitalWrite(buzzer, LOW);
        delay(270/speed);
    }
    pause();
}

#endif