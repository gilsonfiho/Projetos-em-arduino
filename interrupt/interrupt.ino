void botaoAciona();


void setup() {

  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,INPUT_PULLUP);

  attachInterrupt( digitalPinToInterrupt( 11 ),botaoAciona, RISING );
}


void loop() {

  digitalWrite(13,1);
  delay(1000);
  digitalWrite(13,0);
  delay(1000);

}

void botaoAciona(){

  digitalWrite(12,1);
  
}
