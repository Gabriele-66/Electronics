// interruttore 2019
const int LED=13;
const int PULSANTE=8;
int STATOPULSANTE;
int STATOLED=LOW;

void setup ()
{
    pinMode(LED, OUTPUT)
    pinModd(PULSANTE,INPUT)
}

void loop()
{
    STATOPULSANTE=digitalRead(PULSANTE);
    if((STATOPULSANTE==HIGH) and (STATOLED==LOW))
    {
        digitalWrite(LED,HIGH);
        STATOLED=HIGH;
        delay(500);
    }
    else if ((STATOPULSANTE==HIGH) and (STATOLED==HIGH))
    {
        digitalWrite(LED, LOW);
        STATOLED=LOW;
        delay(500);
    }
}