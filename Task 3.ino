int button1 = 11 ; 
int button2= 10 ;
int red = 3 ; 
int white = 4 ; 
int yellow = 5 ;
int blue = 6 ; 

// "red" and "yellow" led are analog
// "White" and "Blue" are digital

void setup()
{
  pinMode(button1 , INPUT) ;
  pinMode(button2 , INPUT) ;
  pinMode(white , OUTPUT) ;
  pinMode(blue , OUTPUT) ;
}

void loop()
{
  if (digitalRead(button1)==HIGH){
    analogWrite(red , 50);
    digitalWrite(white , HIGH) ; 
    delay(250) ; 
  }
  else{ 
    analogWrite(red , 0);
    digitalWrite(white , LOW) ;
    delay(250) ;
    
  }
  
  if (digitalRead(button2)==HIGH){
    analogWrite(yellow , 50);
    digitalWrite(blue , HIGH) ; 
    delay(250) ; 
  }
  else{ 
    analogWrite(yellow , 0);
    digitalWrite(blue , LOW) ;
    delay(250) ;
    
  }
}