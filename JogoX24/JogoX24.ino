int i = 0;
int x = 5;

void acionaBotao();

void setup() {

  pinMode(12,OUTPUT);
  pinMode(2,INPUT_PULLUP);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);

  digitalWrite(7,1);

  attachInterrupt(digitalPinToInterrupt(2),acionaBotao,RISING);

  Serial.begin(9600);
}



void loop() {

  
  
  int vel = map(analogRead(A0),0,1023,0,500);
  int bot = digitalRead(2);

  for(i = 4; i < 11; i++){

    digitalWrite(i,1);
    
    if(x == 1){

        digitalWrite(i,1);
        tone(12,264,200);
        delay(100);
        tone(12,272,200);
        delay(100);
        tone(12,300,200);
        delay(100);
        tone(12,700,200);
        delay(100);
        tone(12,264,200);
        delay(100);
        tone(12,272,200);
        delay(100);
        tone(12,300,200);
        delay(100);
        tone(12,700,200);
        delay(100);
        digitalWrite(i,0);
        delay(10);
        digitalWrite(4,1);
        digitalWrite(5,1);
        digitalWrite(6,1);
        digitalWrite(7,1);
        digitalWrite(8,1);
        digitalWrite(9,1);
        digitalWrite(10,1);
        delay(1000);
        digitalWrite(4,0);
        digitalWrite(5,0);
        digitalWrite(6,0);
        digitalWrite(7,0);
        digitalWrite(8,0);
        digitalWrite(9,0);
        digitalWrite(10,0);
        x = 5;
      
    }
    else if(x == 0){

        digitalWrite(i,1);
        delay(1000);
        digitalWrite(i,0);
        delay(10);
        digitalWrite(4,1);
        digitalWrite(5,1);
        digitalWrite(6,1);
        digitalWrite(7,1);
        digitalWrite(8,1);
        digitalWrite(9,1);
        digitalWrite(10,1);
        delay(50);
        digitalWrite(4,0);
        digitalWrite(5,0);
        digitalWrite(6,0);
        digitalWrite(7,0);
        digitalWrite(8,0);
        digitalWrite(9,0);
        digitalWrite(10,0);
        delay(50);
        digitalWrite(4,1);
        digitalWrite(5,1);
        digitalWrite(6,1);
        digitalWrite(7,1);
        digitalWrite(8,1);
        digitalWrite(9,1);
        digitalWrite(10,1);
        delay(50);
        digitalWrite(4,0);
        digitalWrite(5,0);
        digitalWrite(6,0);
        digitalWrite(7,0);
        digitalWrite(8,0);
        digitalWrite(9,0);
        digitalWrite(10,0);
        delay(50);

        x = 5;
      
      
    }
    delay(vel);
    digitalWrite(i,0);
    digitalWrite(7,1);
  }

  

}

void acionaBotao(){
  
  if( i == 6){
    x = 1;
  }
  else{
    x = 0;
  }
  
}

 
