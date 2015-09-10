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
const int pinoSeletor = A3;
const int pinoPWM = 9;

#define TAMANHO_DISPLAY 7
const int pinoDisplay[TAMANHO_DISPLAY] = {3,5,6,7,8,A4,A5};

//modos
const int modos = 3;
const int LED_PWM = 0;
const int DISPLAY_7SEG = 1;
const int LEDS_RGB = 2;

int modoAtual = 0;

void setup() {
  //inicializa botao, pino seletor e pino PWM
  pinMode(botao, INPUT);
  pinMode(pinoSeletor, OUTPUT);
  pinMode(pinoPWM, OUTPUT);
  //inicializa os LED's do display de 7 segmentos
  for (int item = 0; item < TAMANHO_DISPLAY; item++) {
    pinMode(pinoDisplay[item], OUTPUT);
  }
}

void loop() {
  while(modoAtual < modos) {
    /*if(modoAtual == LED_PWM) {
      //lePotAcionaPwm();
    } else */
    if(modoAtual == DISPLAY_7SEG) {
      digitalWrite(pinoSeletor, LOW);
      lePotAcendeLeds();
    } else if(modoAtual == LEDS_RGB) {
      digitalWrite(pinoSeletor, HIGH);
      lePotAcendeLeds();
    }
    if(digitalRead(botao) == HIGH) {
      modoAtual = modoAtual + 1;
      delay(250);
    }
  }
  modoAtual = 0;
  delay(500);
}

void lePotAcionaPwm() {
  /*
  int valorPot = analogRead(potenciometro);
  if (valorPot < 110) {
    int valorSaida = map(valorPot, 0, 110, 0, 125);
    analogWrite(pinoPWM, valorSaida);
  } else if (1 == 2) {
    int valorSaida = map(valorPot, 110, 220, 0, 500);
    digitalWrite(pinoPWM, HIGH);
    delay(valorSaida);
    digitalWrite(pinoPWM, LOW);
    delay(valorSaida);
  }
  delay(2);
  */
}

void lePotAcendeLeds() {
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
