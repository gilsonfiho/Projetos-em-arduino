#define pinBotao 2
#define pinPot A0

int pinLed[3]= {13,12,11};

boolean botAtual = false;

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
  int numero;
  
  pot = analogRead(pinPot);
  pot1 = map(pot,0,1023,0,500);

  for(x = 0; x <=2; x++){
    numero = random(3);
    digitalWrite(pinLed[numero],HIGH);
    botAtual = digitalRead(pinBotao);
    Serial.println(botAtual);
    if(botAtual == false){
      delay(2000);
    }
    delay(pot1);
    digitalWrite(pinLed[numero],LOW);
  }
}
