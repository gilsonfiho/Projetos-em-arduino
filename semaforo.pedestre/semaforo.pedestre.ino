#define pinVerde 10
#define pinAmarelo 9
#define pinVermelho 8
#define pinBotao 5
#define pinPedestreVerde 3
#define pinPedestreVermelho 2

int fase;
int i;

void setup() {
  pinMode(pinVerde,OUTPUT);
  pinMode(pinAmarelo,OUTPUT);
  pinMode(pinVermelho,OUTPUT);
  pinMode(pinBotao,INPUT);
  pinMode(pinPedestreVerde,OUTPUT);
  pinMode(pinPedestreVermelho,OUTPUT);

  fase = 1 ;
}

void loop() {
  if(fase == 1){
    digitalWrite(pinVerde,HIGH);
    digitalWrite(pinAmarelo,LOW);
    digitalWrite(pinVermelho,LOW);
    digitalWrite(pinPedestreVerde,LOW);
    digitalWrite(pinPedestreVermelho,HIGH);
    delay(2000);
    if(digitalRead(pinBotao) == HIGH){
      delay(2000);
    }
    else{
      delay(6000);
    }
    fase++;
  }
  if(fase == 2){
    digitalWrite(pinVerde,LOW);
    digitalWrite(pinAmarelo,HIGH);
    digitalWrite(pinVermelho,LOW);
    digitalWrite(pinPedestreVerde,LOW);
    digitalWrite(pinPedestreVermelho,HIGH);
    delay(2000);
    fase++;
  }
  if(fase == 3){
    digitalWrite(pinVerde,LOW);
    digitalWrite(pinAmarelo,LOW);
    digitalWrite(pinVermelho,HIGH);
    digitalWrite(pinPedestreVerde,HIGH);
    digitalWrite(pinPedestreVermelho,LOW);
    delay(4000);
    fase++;
  }
  if(fase == 4){
    digitalWrite(pinVerde,LOW);
    digitalWrite(pinAmarelo,LOW);
    digitalWrite(pinVermelho,HIGH);
    digitalWrite(pinPedestreVermelho,LOW);
    for(i=0;i<10;i++){
      digitalWrite(pinPedestreVerde,HIGH);
      delay(100);
      digitalWrite(pinPedestreVerde,LOW);
      delay(100);
    }
    fase = 1;
  }
}
