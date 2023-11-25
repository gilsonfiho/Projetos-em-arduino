#include "Ultrasonic.h"

Ultrasonic ultrasonic(7,6);
Ultrasonic ultrasonic1(5,4);

int Do = 264;
int Re = 297;
int Mi = 330;
int Fa = 352;
int Sol = 395;
int La = 444;
int Si = 498;
int DO = 528;


void setup() {

  pinMode(11,OUTPUT);
  Serial.begin(9600);

}

void loop() {

  int x = ultrasonic.Ranging(CM);
  int y = ultrasonic1.Ranging(CM);
  int nota = map(x,0,40,250,1000);
  int duracao = 150;
  Serial.println(x);
   if( x>=1 && x<=4){
      tone(11,Do,duracao);
    }
    if( x>4 && x<=8){
      tone(11,Re,duracao);
    }
    if(x>8 && x<=12 ){
      tone(11,Mi,duracao);
    }
    if(x>12 && x<=16 ){
      tone(11,Fa,duracao);
    }
    if(x>16 && x<=20 ){
      tone(11,Sol,duracao);
    }
    if(x>20 && x<=24 ){
      tone(11,La,duracao);
    }
    if(x>24 && x<=28 ){
      tone(11,Si,duracao);
    }
    if(x>28 && x<=32 ){
      tone(11,DO,duracao);
    }
    delay(10);


}
