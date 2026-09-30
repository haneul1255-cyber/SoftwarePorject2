int period = 1000;
int duty = 50;
int led = 7;
int on_time = 0;
int off_time = 0;

void setup() {
  pinMode(led,OUTPUT);
  set_period(10000);
  set_duty(50);
  
}

void loop() {
  digitalWrite(led,HIGH);
  delayMicroseconds(on_time);
  digitalWrite(led,LOW);
  delayMicroseconds(off_time);
  
}

void set_period(int value){
  period = value;
  set_time();
}

void set_duty(int value){
  duty = value;
  set_time();
}

void set_time(){
  on_time = period * duty/100;
  off_time = period - duty/100;
}
