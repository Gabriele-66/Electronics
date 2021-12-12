#define PIN_LM35 A5
#define pulp 8 
#define pulm 12
const int vent=13;
const int led_pw=4;
const int acc_vent=5;
const int spen_vent=7;
int statp = 0;
int statm = 0;
int costante=34;


void setup(){
  Serial.begin(9600);
  pinMode (vent,OUTPUT);
  pinMode (led_pw,OUTPUT);
  pinMode (acc_vent,OUTPUT);
  pinMode (spen_vent,OUTPUT);
  pinMode (pulp, OUTPUT);
  pinMode (pulm, OUTPUT);

}

void loop(){
  digitalWrite (led_pw,HIGH);
 
  statp = digitalRead(pulp);
   if (statp == HIGH)
     {
      costante = costante+1;
     }

  statm = digitalRead(pulm);
  if (statm == HIGH)
     {
      costante = costante-1;
     }
  
  int valore = analogRead(PIN_LM35);
  float temperatura = valore / 2.046;  // alimentazione 5 volt
  Serial.print("Temp.: ");
  Serial.print(temperatura);
  Serial.print("°C                ");
  Serial.print("costante: ");
  Serial.println(costante);
  Serial.println(" ");
  delay(500);

    if (temperatura >= costante)
         {
           digitalWrite (vent,HIGH);
           digitalWrite (acc_vent,HIGH);
           digitalWrite (spen_vent,LOW);
         }
    else 
         {
            digitalWrite (vent,LOW);
            digitalWrite (spen_vent,HIGH);
            digitalWrite (acc_vent,LOW);
         }
          
     
}
