//Definição dos pinos dos botões
#define pinBot1 6
#define pinBot2 7 
#define pinBot3 8
#define pinBot4 10
#define pinBot5 11

//Definição do pino do Buzzer
#define pinBuzzer 9

//Definição da frequencia das notas
#define notaDo 264
#define notaRe 297
#define notaMi 330
#define notaFa 352
#define notaSol 396

//Definição da duração da nota
#define duracao 200


void setup() {

  //Definição da porta do Buzzer
  pinMode(9,OUTPUT);
  //Definição da velocidade de transmissão de dados
  Serial.begin(9600);

  //Definição dos pinos dos botões
  pinMode(pinBot1,INPUT_PULLUP);
  pinMode(pinBot2,INPUT_PULLUP);
  pinMode(pinBot3,INPUT_PULLUP);
  pinMode(pinBot4,INPUT_PULLUP);
  pinMode(pinBot5,INPUT_PULLUP);
  

}

void loop() {

  //Leitura dos dados dos botões
  int a = digitalRead(pinBot1);
  int b = digitalRead(pinBot2);
  int c = digitalRead(pinBot3);
  int d = digitalRead(pinBot4);
  int e = digitalRead(pinBot5);

  //Condição para acionar a nota do com base no botão 1
  if( a == 0){
    tone(pinBuzzer,notaDo,duracao);
  }

  //Condição para acionar a nota do com base no botão 2
  if( b == 0){
    tone(pinBuzzer,notaRe,duracao);
  }

  //Condição para acionar a nota do com base no botão 3
  if( c == 0){
    tone(pinBuzzer,notaMi,duracao);
  }

  //Condição para acionar a nota do com base no botão 4
  if( d == 0){
    tone(pinBuzzer,notaFa,duracao);
  }

  //Condição para acionar a nota do com base no botão 5
  if( e == 0){
    tone(pinBuzzer,notaSol,duracao);
  }
  

}
