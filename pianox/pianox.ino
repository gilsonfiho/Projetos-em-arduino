int Do = 264;
int Re = 297;
int Mi = 330;
int Fa = 352;
int Sol = 395;
int La = 444;
int Si = 498;
int DO = 528;

bool a = 0;

int numero = 3;
boolean botaoAtu = false;
boolean botaoAnt = false;
boolean botaoAtu1 = false;
boolean botaoAnt1 = false;

void botaoAciona();

void setup() {

    pinMode(A5,OUTPUT);
    pinMode(A4,OUTPUT);
    pinMode(13,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(1,OUTPUT);
    pinMode(A1,OUTPUT);
    pinMode(2,INPUT_PULLUP);
    pinMode(3,INPUT_PULLUP);
    pinMode(A0,INPUT_PULLUP);
    pinMode(5,INPUT_PULLUP);
    pinMode(6,INPUT_PULLUP);
    pinMode(7,INPUT_PULLUP);
    pinMode(8,INPUT_PULLUP);
    pinMode(9,INPUT_PULLUP);
    pinMode(10,INPUT_PULLUP);
    pinMode(11,INPUT_PULLUP);
    pinMode(12,INPUT_PULLUP);
    pinMode(13,INPUT_PULLUP);
    Serial.begin(9600);

    attachInterrupt(digitalPinToInterrupt(2),botaoAciona,RISING);
    
}

void loop() {

  digitalWrite(1,0);
  int duracao = map(analogRead(A2),0,1023,50,400);
  
  if ( a == 1){
    int b = map(analogRead(A3),0,1023,200,3500);
    tone(A1,b,duracao);
  }
  
  botaoAtu = !digitalRead(3);
  //Verifica se o botão mudou de estado(foi apertado); 
  if(botaoAnt && !botaoAtu){
    numero++;
    if(numero > 7){
      numero = 3;
    }
  }
  botaoAnt = botaoAtu;

  botaoAtu1 = !digitalRead(12);
  //Verifica se o botão mudou de estado(foi apertado); 
  if(botaoAnt1 && !botaoAtu1){
    numero--;
    if(numero < 3){
      numero = 7;
    }
  }
  botaoAnt1 = botaoAtu1;
  Serial.print(numero);
  Serial.println(" OITAVA");

  switch(numero){

     case 3:
      Do = 33*4;
      Re = 37*4;
      Mi = 41*4;
      Fa = 44*4;
      Sol = 49*4;
      La = 55*4;
      Si = 62*4;
      DO = 66*4;
      digitalWrite(A5,0);
      digitalWrite(A4,0);
      digitalWrite(4,0);
      digitalWrite(13,0);
      break;
      case 4:
      Do = 33*8;
      Re = 37*8;
      Mi = 41*8;
      Fa = 44*8;
      Sol = 49*8;
      La = 55*8;
      Si = 62*8;
      DO = 66*8;
      digitalWrite(A5,1);
      digitalWrite(A4,0);
      digitalWrite(4,0);
      digitalWrite(13,0);
      break;
     case 5:
      Do = 33*16;
      Re = 37*16;
      Mi = 41*16;
      Fa = 44*16;
      Sol = 49*16;
      La = 55*16;
      Si = 62*16;
      DO = 66*16;
      digitalWrite(A5,0);
      digitalWrite(A4,1);
      digitalWrite(4,0);
      digitalWrite(13,0);
      break;
      case 6:
      Do = 33*32;
      Re = 37*32;
      Mi = 41*32;
      Fa = 44*32;
      Sol = 49*32;
      La = 55*32;
      Si = 62*32;
      DO = 66*32;
      digitalWrite(A5,0);
      digitalWrite(A4,0);
      digitalWrite(4,1);
      digitalWrite(13,0);
      break;
      case 7:
      Do = 33*64;
      Re = 37*64;
      Mi = 41*64;
      Fa = 44*64;
      Sol = 49*64;
      La = 55*64;
      Si = 62*64;
      DO = 66*64;
      digitalWrite(A5,0);
      digitalWrite(A4,0);
      digitalWrite(4,0);
      digitalWrite(13,1);
      break;
  }

    if( digitalRead(A0) == 0){
      tone(A1,Do,duracao);
    }
    if( digitalRead(5) == 0){
      tone(A1,Re,duracao);
    }
    if( digitalRead(6) == 0){
      tone(A1,Mi,duracao);
    }
    if( digitalRead(7) == 0){
      tone(A1,Fa,duracao);
    }
    if( digitalRead(8) == 0){
      tone(A1,Sol,duracao);
    }
    if( digitalRead(9) == 0){
      tone(A1,La,duracao);
    }
    if( digitalRead(10) == 0){
      tone(A1,Si,duracao);
    }
    if( digitalRead(11) == 0){
      tone(A1,DO,duracao);
    }

}

void botaoAciona(){
    a = !a;
}
