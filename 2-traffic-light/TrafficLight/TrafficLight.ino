#define RED_PIN 12
#define YELLOW_PIN 8
#define GREEN_PIN 2

int red_delay = 4000;
int red_yellow_delay = 1000;
int green_delay = 3000;
int green_blinking_delay = 500;
int yellow_delay = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(RED_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //only reed light
  digitalWrite(RED_PIN, HIGH);
  delay(red_delay);

  //red and yellow
  digitalWrite(YELLOW_PIN, HIGH);
  delay(red_yellow_delay);

  //only green
  digitalWrite(RED_PIN, LOW);
  digitalWrite(YELLOW_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  delay(green_delay);

  //blinking green
  for (int i = 0; i < 3; i++) {
    digitalWrite(GREEN_PIN, LOW);
    delay(green_blinking_delay);  
    digitalWrite(GREEN_PIN, HIGH);
    delay(green_blinking_delay); 
  } 
  
  //yellow only
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(YELLOW_PIN, HIGH);
  delay(yellow_delay);
  digitalWrite(YELLOW_PIN, LOW);
}
