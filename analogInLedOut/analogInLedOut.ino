//This code was based on example AnalogInOutSerial by Tom Igoe
//Changed 07 sep 2015
//by Otavio Carneiro (carneiro.blog.br)
//This code is in the public domain.
const int analogInPin = A2;  // Analog input pin where the potentiometer is plugged into
const int outPin = 9; // Analog output pin to which the LED is attached

void setup() {
  pinMode (outPin, OUTPUT);
}

void loop() {
  // read the analog in value:
  int sensorValue = analogRead(analogInPin);
  if (sensorValue < 110) {
    int outputValue = map(sensorValue, 0, 110, 0, 125);
    analogWrite(outPin, outputValue);
  } else {
    int outputValue = map(sensorValue, 110, 220, 0, 500);
    digitalWrite(outPin, HIGH);
    delay(outputValue);
    digitalWrite(outPin, LOW);
    delay(outputValue);
  }
  delay(2); //gives a break to the analog-to-digital converter
}
