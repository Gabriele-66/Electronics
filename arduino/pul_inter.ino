const int led_0 = 0;
const int led_1 = 1;
const int led_2 = 2;
const int led_3 = 3;
const int led_4 = 4;
const int led_5 = 5;
const int led_6 = 6;
const int led_7 = 7;

const int pul = 11;
const int pot = A3;

int spot;
int spul=LOW;


void setup() {
                 pinMode(led_0,OUTPUT);
                 pinMode(led_1,OUTPUT);
                 pinMode(led_2,OUTPUT);
                 pinMode(led_3,OUTPUT);
                 pinMode(led_4,OUTPUT);
                 pinMode(led_5,OUTPUT);
                 pinMode(led_6,OUTPUT);
                 pinMode(led_7,OUTPUT);
                 pinMode(led_6,OUTPUT);
                 
                 pinMode(pul, INPUT);
             }

void loop() {
                spul=digitalRead (pul);
                spot=analogRead(pot);
                
                if (spul==HIGH)
                    {
                      digitalWrite(led_0,HIGH);
                      delay(500 + spot );
                      digitalWrite(led_1,HIGH);
                      delay(500 + spot * 5);
                      digitalWrite(led_2,HIGH);
                      delay(500 + spot * 5);
                      digitalWrite(led_3,HIGH);
                      delay(500 + spot * 5);
                      digitalWrite(led_4,HIGH);
                      delay(500 + spot * 5);
                      digitalWrite(led_5,HIGH);
                      delay(500 + spot * 5);          
                      digitalWrite(led_6,HIGH);
                      delay(500 + spot * 5);
                      digitalWrite(led_7,HIGH);
                      delay(500 + spot * 5);

                      for(int i=0;i<6;i++)
                         {
                          digitalWrite(led_0,LOW);
                          digitalWrite(led_1,LOW);
                          digitalWrite(led_2,LOW);
                          digitalWrite(led_3,LOW);
                          digitalWrite(led_4,LOW);
                          digitalWrite(led_5,LOW);                  
                          digitalWrite(led_6,LOW);
                          digitalWrite(led_7,LOW);

                          digitalWrite(led_0,HIGH);
                          delay(500 + spot * 5);
                          digitalWrite(led_1,HIGH);
                          delay(500 + spot * 5);
                          digitalWrite(led_2,HIGH);
                          delay(500 + spot * 5);
                          digitalWrite(led_3,HIGH);
                          delay(500 + spot * 5);
                          digitalWrite(led_4,HIGH);
                          delay(500 + spot * 5);
                          digitalWrite(led_5,HIGH);    
                          delay(500 + spot * 5);              
                          digitalWrite(led_6,HIGH);
                          delay(500 + spot * 5);
                          digitalWrite(led_7,HIGH);
                          delay(500 + spot * 5);
                          
                          }

                      
                    }

                     if ((spul==LOW) and (
                        {
                          
                          digitalWrite(led_0,LOW);
                          digitalWrite(led_1,LOW);
                          digitalWrite(led_2,LOW);
                          digitalWrite(led_3,LOW);
                          digitalWrite(led_4,LOW);
                          digitalWrite(led_5,LOW);                  
                          digitalWrite(led_6,LOW);
                          digitalWrite(led_7,LOW);
                        }
            }
