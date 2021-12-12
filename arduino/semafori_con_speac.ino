const int pv=12;
const int pg=13;
const int pr=2;
const int mv=3;
const int mg=4;
const int mr=5;
const int pul=6;
const int spe=8;
int spul=LOW;
const int spe=HIGH;

void setup()
              {
               pinMode (pv,OUTPUT);
               pinMode (pg,OUTPUT);
               pinMode (pr,OUTPUT);
               pinMode (mv,OUTPUT);
               pinMode (mg,OUTPUT);
               pinMode (mr,OUTPUT);
               pinMode (pul,INPUT);
               pinMode (spe,OUTPUT);
               
              }

void loop()
              {
                digitalWrite (pr,HIGH);
                digitalWrite (mv,HIGH);
                digitalWrite (spe,HIGH);
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
                            
                         /*   
                            if(pv==HIGH)
                            {
                              digitalWrite (spe,LOW);
                              int a=5000;
                              delay();

                              sspe=HIGH;
                            }
                             
                            */ 
                            for (int a=5000; a!=0; a--)
                                                                {
                                                                  digitalWrite (sspe,LOW);
                                                                  delay(a);
                                                                  digitalWrite (sspe,HIGH);
                                                                }
                                                                 
                            delay(5000);
                            digitalWrite (pv,LOW);
                            digitalWrite (pg,HIGH);
                            
                         /*   
                            digitalWrite (spe,LOW);
                            delay(1000);  //tempo durata
                            digitalWrite (spe,HIGH);
                            delay(1000); // tempo interruzione
                            digitalWrite (spe,LOW);
                            delay(1000);
                            digitalWrite (spe,HIGH);
                            delay(1000);
                            digitalWrite (spe,LOW);
                            delay(1000);
                            digitalWrite (spe,HIGH);
                            delay(900);
                            digitalWrite (spe,LOW);
                            delay(1000);
                            digitalWrite (spe,HIGH);
                            delay(800);
                            digitalWrite (spe,LOW);
                            delay(1000);
                            digitalWrite (spe,HIGH);
                            delay(700);
                            digitalWrite (spe,LOW);
                            delay(1000);
                            digitalWrite (spe,HIGH);
                            delay(600);
                            digitalWrite (spe,LOW);
                            delay(1000);
                            digitalWrite (spe,HIGH);
                            delay(500);
                            digitalWrite (spe,LOW);
                            delay(1000);
                            digitalWrite (spe,HIGH);
                            delay(400);
                            digitalWrite (spe,LOW);
                            delay(1000);
                            digitalWrite (spe,HIGH);
                            delay(300);
                            digitalWrite (spe,LOW);
                            delay(1000);
                            digitalWrite (spe,HIGH);
                            delay(200);
                            digitalWrite (spe,LOW);
                            delay(1000);
                            digitalWrite (spe,HIGH);
                            delay(100);                           
                          */  
                            digitalWrite (pg,LOW);
                            digitalWrite (pr,HIGH);
                            delay(3000);
                            digitalWrite (mr,LOW);
                          }
              }
                            
                            
                            
       









       
