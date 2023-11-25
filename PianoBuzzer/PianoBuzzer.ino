void setup() {

  pinMode(12,INPUT_PULLUP);
  pinMode(10,INPUT_PULLUP);
  pinMode(9,INPUT_PULLUP);
  pinMode(2,INPUT_PULLUP);
  pinMode(8,INPUT_PULLUP);
  pinMode(11,OUTPUT);
  Serial.begin(9600);

}

void loop() {

   int duracao = map(analogRead(A7),0,1023,0,100);
   int x = digitalRead(12);
   Serial.println(x);
   if(x == 0){
      for(int i = 100; i < 2000; i++){
        tone(11,i,duracao);
        delay(5);
      }  
   }
   int y = digitalRead(10);
   Serial.println(y);
   if(y == 0){
      for(int i = 100; i < 2000; i = i *3){
        tone(11,i,duracao);
        delay(38);
      }  
   }
   int z = digitalRead(9);
   Serial.println(z);
   if(z == 0){
     for(int i = 100; i < 2000; i = i * 5){
        tone(11,i,duracao);
        delay(26);
      }   
   }
   int a = digitalRead(8);
   Serial.println(a);
   if(digitalRead(2) == 0){
      for(int i = 100; i < 2000; i = i * 6){
        tone(11,i,duracao);
        delay(47);
      }  
   }
   int b = digitalRead(2);
   Serial.println(b);
   if(digitalRead(8) == 0){
      for(int i = 100; i < 2000; i = i * 8){
        tone(11,i,duracao);
        delay(31);
      }  
   }

   if( a == 0 && b == 0){
      for(int i = 100; i < 2000; i = i * 4){
        tone(11,i,duracao);
        delay(24);
      }  
    
   }
  
   

}
