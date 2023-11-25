#define red1 9
#define yelow 10
#define green1 11
#define red2 12
#define green2 13
#define button 8

int x;

void setup() {
  pinMode(red1, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(green1, OUTPUT);
  pinMode(green2, OUTPUT);
  pinMode(yelow, OUTPUT);
  pinMode(button, INPUT);
  

}

void loop() {
  x = digitalRead(button);
    if(x == HIGH){
      digitalWrite(red1, LOW);
      digitalWrite(green1, HIGH);
      digitalWrite(red2, HIGH);
      digitalWrite(yelow,LOW);
      digitalWrite(green2, LOW);
      delay(500);
    }
    else{
      digitalWrite(red1, LOW);
      digitalWrite(green1, HIGH);
      digitalWrite(red2, HIGH);
      digitalWrite(yelow,LOW);
      digitalWrite(green2, LOW);
      delay(3000);
    }
    digitalWrite(red1,LOW);
    digitalWrite(green1,LOW);
    digitalWrite(red2,HIGH);
    digitalWrite(yelow,HIGH);
    digitalWrite(green2,LOW);
    delay(1500);
    digitalWrite(red1,HIGH);
    digitalWrite(green1,LOW);
    digitalWrite(red2,LOW);
    digitalWrite(yelow,LOW);
    digitalWrite(green2,HIGH);
    delay(3000);
}
 
