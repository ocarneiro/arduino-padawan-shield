
#define TAMANHO_DISPLAY 7
const int pinoDisplay[TAMANHO_DISPLAY] = {A4,A5,7,8,5,3,6};

const int display0[TAMANHO_DISPLAY] = {1,1,1,1,1,1,0};
const int display1[TAMANHO_DISPLAY] = {0,1,1,0,0,0,0};

/*
const int numeros[10][TAMANHO_DISPLAY] = {
  {1,1,1,1,1,1,0},
  {0,1,1,0,0,0,0}
};
*/

void setup() {
  //inicializa os LED's do display de 7 segmentos
  for (int item = 0; item < TAMANHO_DISPLAY; item++) {
    pinMode(pinoDisplay[item], OUTPUT);
  }
}

void loop() {
  for (int seg = 0; seg < TAMANHO_DISPLAY; seg++) {
    digitalWrite(pinoDisplay[seg], display1[seg]);
  }
  delay(1000);
  for (int seg = 0; seg < TAMANHO_DISPLAY; seg++) {
    digitalWrite(pinoDisplay[seg], LOW);
  }
  delay(1000);
  for (int seg = 0; seg < TAMANHO_DISPLAY; seg++) {
    digitalWrite(pinoDisplay[seg], display0[seg]);
  }
  delay(1000);
  for (int seg = 0; seg < TAMANHO_DISPLAY; seg++) {
    digitalWrite(pinoDisplay[seg], LOW);
  }
}


