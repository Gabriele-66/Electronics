const int FOTORESISTENZA=A0;
int VALOREDIGITALE;


void setup() 
  {
        
     Serial.begin (9600);
    
  }

void loop() 
  {
    VALOREDIGITALE=analogRead (FOTORESISTENZA);
    Serial.print ("VALOREDIGITALE=");
    Serial.print (VALOREDIGITALE);
    Serial.println();
    delay(2000);
  
   }

