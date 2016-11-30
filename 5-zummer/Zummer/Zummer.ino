/*
  AnalogReadSerial
  Reads an analog input on pin 0, prints the result to the serial monitor.
  Graphical representation is available using serial plotter (Tools > Serial Plotter menu)
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.
*/

#define IN_PIN A0
#define ZUMMER_PIN 7

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second: 
  pinMode(IN_PIN, INPUT);
  pinMode(ZUMMER_PIN, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  int input = analogRead(IN_PIN);
  tone(ZUMMER_PIN, input * 4);
}
