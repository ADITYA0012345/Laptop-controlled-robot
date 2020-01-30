int pin1 = 3;  //assign arduino pin number 3 to the input pin1 of motor driver
int pin2 = 5;  //assign arduino pin number 5 to the input pin2 of motor driver
int pin3 = 6;  //assign arduino pin number 6 to the input pin3 of motor driver
int pin4 = 9;  //assign arduino pin number 9 to the input pin4 of motor driver

 void setup()
 {
  Serial.begin(9600); 
  pinMode(pin1,OUTPUT);  
  pinMode(pin2,OUTPUT);  
  pinMode(pin3,OUTPUT);  
  pinMode(pin4,OUTPUT);  
 }

void loop()
{
  while(Serial.available()) 
  {
    char input = Serial.read(); 
    if(input=='w'||input=='W')  
    {
      forward(); 
      Serial.println("FORWARD"); 
    }
    else if(input=='d'||input=='D')  
    {
      right();  
      Serial.println("RIGHT");  
    }
    else if(input=='a'||input=='A')  
    {
      left(); 
      Serial.println("LEFT"); 
    }
    else if(input=='s'||input=='S')  
    {
      backward(); 
      Serial.println("BACKWARD");  
    }
  }
}

void right() 
{
  digitalWrite(pin1, HIGH);  
  digitalWrite(pin2, LOW);   
  digitalWrite(pin3, HIGH);  
  digitalWrite(pin4, LOW);   
}
void backward() 
{
  digitalWrite(pin1, HIGH);  
  digitalWrite(pin2, LOW);  
  digitalWrite(pin3, LOW);   
  digitalWrite(pin4, HIGH);  
}
void forward() 
{
  digitalWrite(pin1, LOW);  
  digitalWrite(pin2, HIGH); 
  digitalWrite(pin3, HIGH); 
  digitalWrite(pin4, LOW);  
}
void left() 
{
  digitalWrite(pin1, LOW);  
  digitalWrite(pin2, HIGH); 
  digitalWrite(pin3, LOW);  
  digitalWrite(pin4, HIGH); 
}

