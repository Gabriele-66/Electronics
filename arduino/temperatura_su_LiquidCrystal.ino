/*  
   AUTORE:                        Gabriele Recchia
   DATA:                          16/05/2019
   TITOLO:                        Termometro LiquidCrystal
   SCOPO DEL PROGRAMMA:           Visualizzare la temperatura acquisita dal'LM35 sul display 16*2
   VERSIONE:                      1.0
   NOTE:                          VImax:NDecMax=VI:NDecVI
                                  VI=T*10*10^-3
                                  NdecmVI=(NdecmMax/VImax)*vi=(1023/5)*VI=204,6*VI=204,6*T*10*10^-3
                                  T=(NdecVI/2,046)=0.48825
   ESEMPIO:                       LiquidCrystal lcd (5,4,3,2,1,0); 5--> rs;   4-->enable;  3,2,1,0-->dati;
*/  

#include <LiquidCrystal.h>

LiquidCrystal lcd (4,6,11,12,13,14):
#define LM35 A0
int N_decimale;
int T_interna;

void setup()
{
  lcd.begin (16,2);                            //  tipo lcd 16 colonne 2 righe
  lcd.clear ();                                // reset lcd
}

void loop ()
{
  N_decimale = analogRead (LM35);
  T_interna = N_decimale * 0.48875;
  lcd.display ();                              // accendo il display
  lcd.setCursor (0,0);                         /* 
                                                  imposto da dove deve iniziare a scrivere colonna e riga
                                                  per scrivere su un'altra riga si riposiziona il cursore
                                               */
  lcd.print ("T.(int.): "); 
  lcd.print (T_interna);
  lcd.print (" *C ");
  delay (500);
}
