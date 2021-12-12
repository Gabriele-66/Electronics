const int FOTORESISTENZA=A0;
const int LED1=1;
const int LED2=2;
int VALOREDIGITALE;
int SOGLIA=400;


void setup() 
  {
        
     pinMode (LED1,OUTPUT);
     pinMode (LED2,OUTPUT);
    
  }

void loop() 
  {
    VALOREDIGITALE=analogRead (FOTORESISTENZA);
    
    if (VALOREDIGITALE>SOGLIA)
    {
      digitalWrite (LED1,HIGH);
      digitalWrite (LED2,HIGH);
    }
      else
      {
        digitalWrite (LED1,LOW);
        digitalWrite (LED2,LOW);
    
   
   }
  }

