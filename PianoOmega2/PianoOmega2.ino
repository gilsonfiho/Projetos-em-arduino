int Do = 264*4;
int DoS = 280*4;
int Re = 297*4;
int ReS = 314*4;
int Mi = 330*4;
int Fa = 352*4;
int FaS = 373*4;
int Sol = 395*4;
int SolS = 419*4;
int La = 444*4;
int LaS = 470*4;
int Si = 498*4;
int DO = 264*8;

int pinBotDo = 12;
int pinBotDoS = 11;
int pinBotRe = 10;
int pinBotReS = 9;
int pinBotMi = 8;
int pinBotFa = 7;
int pinBotFaS = 6;
int pinBotSol = 5;
int pinBotSolS = 4;
int pinBotLa = 3;
int pinBotLaS = 2;
int pinBotDO = A3;
int pinBotSi = A0;

int pinBuzzer = A1;


void setup() {

  pinMode(pinBotDo,INPUT_PULLUP);
  pinMode(pinBotDoS,INPUT_PULLUP);
  pinMode(pinBotRe,INPUT_PULLUP);
  pinMode(pinBotReS,INPUT_PULLUP);
  pinMode(pinBotMi,INPUT_PULLUP);
  pinMode(pinBotFa,INPUT_PULLUP);
  pinMode(pinBotFaS,INPUT_PULLUP);
  pinMode(pinBotSol,INPUT_PULLUP);
  pinMode(pinBotSolS,INPUT_PULLUP);
  pinMode(pinBotLa,INPUT_PULLUP);
  pinMode(pinBotLaS,INPUT_PULLUP);
  pinMode(pinBotSi,INPUT_PULLUP);
  pinMode(pinBotDO,INPUT_PULLUP);

  pinMode(pinBuzzer,OUTPUT);

}

void loop() {

  int duracao = map(analogRead(A2),0,1023,0,500);

  if( digitalRead(pinBotDo) == 0){
      tone(A1,Do,duracao);
    }
    if( digitalRead(pinBotDoS) == 0){
      tone(A1,DoS,duracao);
    }
    if( digitalRead(pinBotRe) == 0){
      tone(A1,Re,duracao);
    }
    if( digitalRead(pinBotReS) == 0){
      tone(A1,ReS,duracao);
    }
    if( digitalRead(pinBotMi) == 0){
      tone(A1,Mi,duracao);
    }
    if( digitalRead(pinBotFa) == 0){
      tone(A1,Fa,duracao);
    }
    if( digitalRead(pinBotFaS) == 0){
      tone(A1,FaS,duracao);
    }
    if( digitalRead(pinBotSol) == 0){
      tone(A1,Sol,duracao);
    }
    if( digitalRead(pinBotSolS) == 0){
      tone(A1,SolS,duracao);
    }
    if( digitalRead(pinBotLa) == 0){
      tone(A1,La,duracao);
    }
    if( digitalRead(pinBotLaS) == 0){
      tone(A1,LaS,duracao);
    }
    if( digitalRead(pinBotSi) == 0){
      tone(A1,Si,duracao);
    }
    if( digitalRead(pinBotDO) == 0){
      tone(A1,DO,duracao);
    }
  

}
