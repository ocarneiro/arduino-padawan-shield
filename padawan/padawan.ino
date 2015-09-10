/*
 Este eh um codigo de exemplo para o shield Padawan, fabricado pela Robocore (robocore.net).
 
 Este codigo foi criado por Otavio Carneiro (carneiro.blog.br) para o beneficio de outros proprietarios de shields similares.
 
 Este codigo eh de dominio publico. Faca o que quiser!
 -----------
 This is an example code for use with the Robocore Padawan Shield (robocore.net).
 
 It was created by Otavio Carneiro (carneiro.blog.br) for the benefit of other owners of similar shields. 

 This code is in the public domain.
 
 https://github.com/ocarneiro/arduino-padawan-shield
 */

const int botao = 2;
const int potenciometro = A2;
#define TAMANHO_DISPLAY 7
const int pinoDisplay[TAMANHO_DISPLAY] = {3,5,6,7,8,A4,A5};

//modos
const int modos = 3;
const int MODO_1 = 1;
const int MODO_2 = 2;

int modoAtual = 0;

void setup() {
  //inicializa botao
  pinMode(botao, INPUT);
  //inicializa os LED's do display de 7 segmentos
  for (int item = 0; item < TAMANHO_DISPLAY; item++) {
    pinMode(pinoDisplay[item], OUTPUT);
  }
}

void loop() {
  while(modoAtual < modos) {
    if(modoAtual == MODO_1) {
      modo1();
    } else if(modoAtual == MODO_2) {
      modo2();
    }
    if(digitalRead(botao) == HIGH) {
      modoAtual = modoAtual + 1;
      delay(250);
    }
  }
  modoAtual = 0;
  delay(500);
}

void modo1() {
  int valorPot = analogRead(potenciometro);
  int segmentoAMostrar = map(valorPot,0,255,0,8);
    
  digitalWrite(pinoDisplay[segmentoAMostrar], HIGH);
  delay (200);
  digitalWrite(pinoDisplay[segmentoAMostrar], LOW);
}

void modo2() {
}
  
void test7segmentsDisplay() {

  for (int item = 0; item < TAMANHO_DISPLAY; item++) {
    digitalWrite(pinoDisplay[item], HIGH);
    delay(500);
    digitalWrite(pinoDisplay[item], LOW);
  }

  
}
