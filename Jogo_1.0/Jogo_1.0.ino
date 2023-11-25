#define pinBotao 2
#define pinPot A0

int pinLed[3]= {13,12,11};

boolean botAtual = false;
boolean botAtual1 = false;
boolean botAnt1 = false;
int x;

void setup() {
  Serial.begin(9600);
  int i;
  for(i = 0; i<=2; i++){
    pinMode(pinLed[i],OUTPUT);
  }
  pinMode(pinBotao,INPUT_PULLUP);
}

void loop() {

  int pot,pot1;
  pot = analogRead(pinPot);
  pot1 = map(pot,0,1023,0,500);
  
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
