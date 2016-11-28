int EN=4;
int LPWM=5;
int RPWM=6;
void setup() {
  // put your setup code here, to run once:
  pinMode(EN,OUTPUT);
  pinMode(LPWM,OUTPUT);
  pinMode(RPWM,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(EN,HIGH);
  analogWrite(LPWM,0);
  analogWrite(RPWM,200);
  delay(4000);
}
