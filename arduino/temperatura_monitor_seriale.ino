//Visualizzare la temperatura sul monitor seriale 
#define LM35 A0
int N_combinazione;
int T_interna;
const int vent=13;

void setup ()
             {
               Serial.begin (9600);
               pinMode (vent,OUTPUT);
             }
       
void loop ()
             {
               N_combinazione=analogRead(LM35);
               T_interna=N_combinazione*0.48875;
               Serial.print("N_combinazioni : ");
               Serial.println(N_combinazione);
               delay(200);
               Serial.print("TEMPERATURA interna = ");
               Serial.print(T_interna);
               Serial.println("*C ");
               Serial.println();
               delay(2000);
               digitalWrite (vent,HIGH);
               
             }
