int Do = 264*2;
int DoS = 280*2;
int Re = 297*2;
int ReS = 314*2;
int Mi = 330*2;
int Fa = 352*2;
int FaS = 373*2;
int Sol = 395*2;
int SolS = 419*2;
int La = 444*2;
int LaS = 470*2;
int Si = 498*2;

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
  

}
