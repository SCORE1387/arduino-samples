/*
  AnalogReadSerial
  Reads an analog input on pin 0, prints the result to the serial monitor.
  Graphical representation is available using serial plotter (Tools > Serial Plotter menu)
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.
*/

#define FIRST_PIN 2
#define LAST_PIN 11
#define INPUT_PIN A0

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second: 
  pinMode(INPUT_PIN, INPUT);
  for (int pin = FIRST_PIN; pin <= LAST_PIN; pin++) {
    pinMode(pin, OUTPUT);
  }
}

// the loop routine runs over and over again forever:
void loop() {
  int value = analogRead(INPUT_PIN);
  int scale = map(value, 0, 1023, 2, 11);
  for (int pin = FIRST_PIN; pin <= scale; pin++) {
    digitalWrite(pin, HIGH);
  }
  for (int pin = scale + 1; pin <= LAST_PIN; pin++) {
    digitalWrite(pin, LOW);
  }
  delay(2);
}
