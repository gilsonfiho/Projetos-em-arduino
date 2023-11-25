#define pinSom 5
#define pinLed 8


#define tempoMaximoDeUmaPalma  150 //milisegundos
#define tempoMaximoEntrePalmas 500 //milisegundos

int contaPalmas = 0;
long tempoEspera = 0;
long tempoEsperaEntrePalmas = 0;
boolean EstadoLed = true;

void executarAcao();

void setup() {
  pinMode(pinSom, INPUT);
  pinMode(pinLed, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  //verifica o estado do sensor de som (ele fica normalmente com a porta ligada. Quando ouver uma palma, ele desliga momentaneamente a porta)
  int sensorSom = digitalRead(pinSom);
  
  

  //se o sensor detectou palmas
  if (sensorSom == 1) {
     
     //espera um tempo para nao detectar a mesma palma mais de uma vez 
     if (tempoEspera == 0) {
        tempoEspera = tempoEsperaEntrePalmas = millis(); 
        contaPalmas++;
     } else if ((millis() - tempoEspera) >= tempoMaximoDeUmaPalma) {
        tempoEspera = 0;
     }
  }
  
  //caso exceda o tempo maximo entre palmas, zera o contador de palmas
  if ( (contaPalmas != 0) && ((millis() - tempoEsperaEntrePalmas) > 500) ) {
     executarAcao();
     contaPalmas = 0;
     tempoEsperaEntrePalmas = millis();
  }
  
  
  
}


void executarAcao() {
  
  Serial.println(contaPalmas);
  switch (contaPalmas) {
    case 2: 
       digitalWrite(pinLed,!digitalRead(pinLed));
       break;
  }
  
}
