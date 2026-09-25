#define PIN_LED 9

void setup() {
  pinMode(PIN_LED,OUTPUT);
  digitalWrite(PIN_LED,1);
  delay(1000);
}

void loop() {
  digitalWrite(PIN_LED,0);
  delay(100);
  digitalWrite(PIN_LED,1);
  delay(100);
}
