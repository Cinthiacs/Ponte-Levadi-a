#include <Servo.h>
int pinoAbrir = 9;
int pinoFechar = 10;
int sensorFechar = 12;
int sensorAbrir = 13;
void setup() {
  Serial.begin(9600);
  pinMode(pinoAbrir, OUTPUT);
  pinMode(pinoFechar, OUTPUT);
  pinMode(sensorAbrir, INPUT_PULLUP);
  pinMode(sensorFechar, INPUT_PULLUP);
}
int a = 0;
void loop() {
  //Leitura de um caracter da serial
  char c = Serial.read();
  //Se o caracter for 'a', abre a ponte
  if (c == 'a') {
    Serial.println("abrindo");
    // desativa pino de fechar a ponte
    digitalWrite(pinoFechar, LOW);
    //espera um tempo para não ativar abrir e fechar ao mesmo tempo
    delay(5);
    //ativa pino abrir
    digitalWrite(pinoAbrir, HIGH);
    //As vezes por algum motivo, sai do while de verificação do sensor.
    // por isso tem esse contador. Tem que sair 5 vezes para aceitar que é sinal do sensor
    a = 0;
    while (a < 5) {
      while (digitalRead(sensorAbrir) == HIGH);
      a ++;
    }
    //desativa pino abrir ponte
    digitalWrite(pinoAbrir, LOW);
  }
  //Se o caracter for 'f', fecha a ponte
  if (c == 'f') {
    Serial.println("fechando");
    //Desativa pino abrir ponte
    digitalWrite(pinoAbrir, LOW);
    //espera um tempo para não ativar abrir e fechar ao mesmo tempo
    delay(5);
    //ativa pino fechar ponte
    digitalWrite(pinoFechar, HIGH);
    //As vezes por algum motivo, sai do while de verificação do sensor.
    // por isso tem esse contador. Tem que sair 5 vezes para aceitar que é sinal do sensor
    a = 0;
    while (a < 5) {
      while (digitalRead(sensorFechar) == HIGH);
      a ++;
    }
    //desativa pino fechar ponte'
    digitalWrite(pinoFechar, LOW);
  }
}
