___int_wchar_t_h
{
    pinMode (led1,OUTPUT);
    pinMode (led2,OUTPUT);
}

void loop ()
{
    valoredigitale=analogRead(fotor);
    
    if (valoredigitale > soglia )
     {
        digitalWrite (led1,HIGH);
        digitalwrite (led2,HIGH);
     }
    else 
    {
        digitalWrite (led1,LOW);
        digutalwrite (led2,LOW);
    }
}