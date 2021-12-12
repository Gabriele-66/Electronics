const int led= 13;
const int pulsante= 11;
int statopulsante;
int statoled=LOW;
void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(11,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
statopulsante=digitalRead(pulsante);
 if ((statopulsante==HIGH) and (statoled==LOW))
 {
  digitalWrite (led,HIGH);
  statoled=HIGH;
  delay(500);
}
 else if((statopulsante==HIGH)and(statoled==HIGH))
  {
  digitalWrite(led,LOW);
  statoled=LOW;
  delay(500);
  }
}
