/*
 * NOME PROGRAMMA: Led lampeggiante
 * AUTORE: sublibe 
 * DATA: 19/05/2018
 * VERSIONE: n.1 del 19/05/2018
 * FUNZIONE: Scopo del programma è quello di far lampeggiare dei led.
 */
const int led_13 = 13;
const int led_12 = 12;
const int led_11 = 11;
const int led_10 = 10;
const int led_9 = 9;
const int led_8 = 8;
const int led_7 = 7;
const int led_6 = 6;

 void setup()
      {
         pinMode(led_13,OUTPUT);
         pinMode(led_12,OUTPUT);
         pinMode(led_11,OUTPUT);
         pinMode(led_10,OUTPUT);
         pinMode(led_9,OUTPUT);
         pinMode(led_8,OUTPUT);
         pinMode(led_7,OUTPUT);
         pinMode(led_6,OUTPUT);
      }
void loop()
      {
        digitalWrite(led_13,HIGH);
        digitalWrite(led_6,HIGH);
        delay(100);
        digitalWrite(led_13,LOW);
        digitalWrite(led_6,LOW);
        delay(100);
        digitalWrite(led_12,HIGH);
        digitalWrite(led_7,HIGH);
        delay(100);
        digitalWrite(led_12,LOW);
        digitalWrite(led_7,LOW);
        delay(100);
        digitalWrite(led_11,HIGH);
        digitalWrite(led_8,HIGH);
        delay(100);
        digitalWrite(led_11,LOW);
        digitalWrite(led_8,LOW);
        delay(100);
        digitalWrite(led_10,HIGH);
        digitalWrite(led_9,HIGH);
        delay(100);
        digitalWrite(led_10,LOW);
        digitalWrite(led_9,LOW);
        delay(100);
        digitalWrite(led_11,HIGH);
        digitalWrite(led_8,HIGH);
        delay(100);
        digitalWrite(led_11,LOW);
        digitalWrite(led_8,LOW);
        delay(100);
        digitalWrite(led_12,HIGH);
        digitalWrite(led_7,HIGH);
        delay(100);
        digitalWrite(led_12,LOW);
        digitalWrite(led_7,LOW);
        delay(100);

        digitalWrite(led_13,HIGH);
        delay(100);
        digitalWrite(led_12,HIGH);
        delay(100);
        digitalWrite(led_11,HIGH);
        delay(100);
        digitalWrite(led_10,HIGH);
        delay(100);
        digitalWrite(led_9,HIGH);
        delay(100);
        digitalWrite(led_8,HIGH);
        delay(100);
        digitalWrite(led_7,HIGH);
        delay(100);
        digitalWrite(led_6,HIGH);
        delay(100);
        digitalWrite(led_6,LOW);
        delay(100);
        digitalWrite(led_7,LOW);
        delay(100);
        digitalWrite(led_8,LOW);
        delay(100);
        digitalWrite(led_9,LOW);
        delay(100);
        digitalWrite(led_10,LOW);
        delay(100);
        digitalWrite(led_11,LOW);
        delay(100);
        digitalWrite(led_12,LOW);
        delay(100);
        digitalWrite(led_13,LOW);
        delay(100);
        
      }

