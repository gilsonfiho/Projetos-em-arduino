
bool estadoLed = 0;
void acionaBotao();

void setup() {
  
  pinMode(2,INPUT_PULLUP);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  attachInterrupt(digitalPinToInterrupt(2), acionaBotao, RISING);

}

void loop() {
  
  digitalWrite(13,HIGH);
  delay(100);
  digitalWrite(13,LOW);
  delay(100);

}

void acionaBotao(){
  
  estadoLed = !estadoLed;
  digitalWrite(12,estadoLed);

}
