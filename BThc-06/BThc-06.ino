void setup()
{
  Serial.begin(9600);
}

void loop()
{  
  if (Serial.available())
  {  
    String S = GetLine();
    Serial.print(S);
  }
}

String GetLine()
{   
  String S = "" ;
  if (Serial.available())
  {    
    char c = Serial.read();
    S = S + c ;
    return( S + '\n') ;
  }
}

