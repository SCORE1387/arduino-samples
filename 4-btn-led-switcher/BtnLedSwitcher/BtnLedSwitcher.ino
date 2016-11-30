/*
  AnalogReadSerial
  Reads an analog input on pin 0, prints the result to the serial monitor.
  Graphical representation is available using serial plotter (Tools > Serial Plotter menu)
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.
*/

#define BTN_PIN 7
#define LED_PIN 12

boolean led_status = false;
boolean btn_status_prev = false; //true if pushed

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second: 
  pinMode(BTN_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  boolean btn_status_curr = !digitalRead(BTN_PIN); //false if pushed, true otherwise
  if (btn_status_curr && !btn_status_prev) {
    led_status = !led_status;  
  }
  btn_status_prev = btn_status_curr;
  
  digitalWrite(LED_PIN, led_status);
}
