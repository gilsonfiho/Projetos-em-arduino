#define bot1 4 // Sol
#define bot2 5 // Fá
#define bot3 6 // Mi
#define bot4 7 // Ré
#define bot5 8 // Dó
#define bot6 9 // La
#define bot7 10 // Ré
#define bot8 11 // Dó
#define bot9 12 // La
#define pinBuzzer 3

void setup() {

  Serial.begin(9600);
  
  pinMode(bot1,INPUT_PULLUP);
  pinMode(bot2,INPUT_PULLUP);
  pinMode(bot3,INPUT_PULLUP);
  pinMode(bot4,INPUT_PULLUP);
  pinMode(bot5,INPUT_PULLUP);
  pinMode(bot6,INPUT_PULLUP);
  pinMode(bot7,INPUT_PULLUP);
  pinMode(bot8,INPUT_PULLUP);
  pinMode(bot9,INPUT_PULLUP);

  pinMode(pinBuzzer,OUTPUT);
  
}

void loop() {
  
    int a = digitalRead(bot1);
    Serial.println('a',a);
    if(a == LOW){
      tone(pinBuzzer,264,200);
      delay(1);
    }
    int b = digitalRead(bot2);
    Serial.println('b',b);
    if(b == LOW){
      tone(pinBuzzer,296,200);
      delay(1);
    }
    int c = digitalRead(bot3);
    Serial.println('c',c);
    if(c == LOW){
      tone(pinBuzzer,(332),200);
      delay(1);
    }
    int d = digitalRead(bot4);
    Serial.println('d',d);
    if(d == LOW){
      tone(pinBuzzer,352,200);
      delay(1);
    }
    int e = digitalRead(bot5);
    Serial.println('e',e);
    if(e == LOW){
      tone(pinBuzzer,395,200);
      delay(1);
    }
    int f = digitalRead(bot6);
    Serial.println('f',f);
    if(f == LOW){
      tone(pinBuzzer,444,200);
      delay(1);
    }
    
    int g = digitalRead(bot7);
    Serial.println('g',g);
    if(g == LOW){
      tone(pinBuzzer,498,200);
      delay(1);
    }

    int h = digitalRead(bot8);
    Serial.println('h',h);
    if(h == LOW){
      tone(pinBuzzer,528,200);
      delay(1);
    }

    int i = digitalRead(bot9);
    Serial.println('i',i);
    if(i == LOW){
      tone(pinBuzzer,592,200);
      delay(1);
    }
    
    
}
