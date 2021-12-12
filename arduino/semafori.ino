const int pv=12;
const int pg=13;
const int pr=2;
const int mv=3;
const int mg=4;
const int mr=5;
const int pul=6;
int spul=LOW;

void setup()
              {
               pinMode (pv,OUTPUT);
               pinMode (pg,OUTPUT);
               pinMode (pr,OUTPUT);
               pinMode (mv,OUTPUT);
               pinMode (mg,OUTPUT);
               pinMode (mr,OUTPUT);
               pinMode (pul,INPUT);
              }

void loop()
              {
                digitalWrite (pr,HIGH);
                digitalWrite (mv,HIGH);
                spul=digitalRead(pul);
       
            if(spul==HIGH)
                          {
                            digitalWrite (mv,LOW);
                            digitalWrite (mg,HIGH);
                            delay(5000);
                            digitalWrite (mg,LOW);
                            digitalWrite (mr,HIGH);
                            delay(5000);
                            digitalWrite (pr,LOW);
                            digitalWrite (pv,HIGH);
                            delay(5000);
                            digitalWrite (pv,LOW);
                            digitalWrite (pg,HIGH);
                            delay(5000);
                            digitalWrite (pg,LOW);
                            digitalWrite (pr,HIGH);
                            delay(5000);
                            digitalWrite (mr,LOW);
                          }
              }
                            
                            
                            
       









       
