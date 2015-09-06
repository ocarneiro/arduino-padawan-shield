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

int potenciometro = A2;
#define TAMANHO_DISPLAY 7
int pinoDisplay[TAMANHO_DISPLAY] = {3,5,6,7,8,A4,A5};

void setup() {

  for (int item = 0; item < TAMANHO_DISPLAY; item++) {
    pinMode(pinoDisplay[item], OUTPUT);
  }
}

void loop() {
  for (int item = 0; item < TAMANHO_DISPLAY; item++) {
    digitalWrite(pinoDisplay[item], HIGH);
    delay(500);
    digitalWrite(pinoDisplay[item], LOW);
  }

  
}
