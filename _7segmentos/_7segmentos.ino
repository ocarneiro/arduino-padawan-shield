
#define TAMANHO_DISPLAY 7
const int pinoDisplay[TAMANHO_DISPLAY] = {A4,A5,7,8,5,3,6};

const int numeros[10][TAMANHO_DISPLAY] = {
  {1,1,1,1,1,1,0},  //0
  {0,1,1,0,0,0,0},  //1
  {1,1,0,1,1,0,1},  //2
  {1,1,1,1,0,0,1},  //3
  {0,1,1,0,0,1,1},  //4
  {1,0,1,1,0,1,1},  //5
  {0,0,1,1,1,1,1},  //6
  {1,1,1,0,0,0,0},  //7
  {1,1,1,1,1,1,1},  //8
  {1,1,1,0,0,1,1}
};

void setup() {
  //inicializa os LED's do display de 7 segmentos
  for (int item = 0; item < TAMANHO_DISPLAY; item++) {
    pinMode(pinoDisplay[item], OUTPUT);
  }
}

void loop() {
  for (int numero_atual = 0; numero_atual < 10; numero_atual++) {
    for (int seg = 0; seg < TAMANHO_DISPLAY; seg++) {
      digitalWrite(pinoDisplay[seg], numeros[numero_atual][seg]);
    }
  delay(1000);
  }
  
}


