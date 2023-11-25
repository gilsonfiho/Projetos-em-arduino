#define pinBotao 2
#define pinPot A0
#define pinBotao1 3

int pinLed[3]= {13,12,11};

boolean botAtual = false;
boolean botAtual1 = false;
boolean botAnt1 = false;
int x,numero,cont=0;

void setup() {
  Serial.begin(9600);
  int i;
  for(i = 0; i<=2; i++){
    pinMode(pinLed[i],OUTPUT);
  }
  pinMode(pinBotao,INPUT_PULLUP);
  pinMode(pinBotao1,INPUT);
  cont = 0;
}

void loop() {

  int pot,pot1;

  botAtual1 = digitalRead(pinBotao1);
  Serial.println("Botao 1");
  Serial.println(botAtual1);
  if(botAtual1 == 1){
    cont++;
  }
  pot = analogRead(pinPot);
  pot1 = map(pot,0,1023,0,500);

  if(cont == 0){
      for(x = 0; x <=2; x++){
          digitalWrite(pinLed[x],HIGH);
          botAtual = digitalRead(pinBotao);
          Serial.println("Botao");
          Serial.println(botAtual);
          if(botAtual == false){
            delay(2000);
          }
          delay(pot1);
          digitalWrite(pinLed[x],LOW);
      }

      for(x = 2; x>=0 ; x--){
          digitalWrite(pinLed[x],HIGH);
          botAtual = digitalRead(pinBotao);
          Serial.println("Botao");
          Serial.println(botAtual);
          if(botAtual == false){
            delay(2000);
          }
          delay(pot1);
          digitalWrite(pinLed[x],LOW);
       }
  }
  else{
      for(x = 0; x <=2; x++){
          numero = random(3);
          digitalWrite(pinLed[numero],HIGH);
          botAtual = digitalRead(pinBotao);
          Serial.println("Botao");
          Serial.println(botAtual);
          if(botAtual == false){
            delay(2000);
          }
          delay(pot1);
          digitalWrite(pinLed[numero],LOW);
     }  
  }
}
