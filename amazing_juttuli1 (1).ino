// C++ code
//
int n1=10,n2=9,n3=8,n4=7;
int ena=11,enb=5;
int reading;
void setup()
{
  Serial.begin(9600);
  pinMode(n1,OUTPUT);
pinMode(n2,OUTPUT);
  pinMode(n3,OUTPUT);
  pinMode(n4,OUTPUT);
  pinMode(ena,OUTPUT);
  pinMode(enb,OUTPUT);
}

void loop()
{
  if(Serial.available()>0){
    reading=Serial.read();
    switch(reading){
      case '1':
      analogWrite(ena,127);
      analogWrite(enb,127);
      digitalWrite(n1,0);
       digitalWrite(n2,0);
         digitalWrite(n3,0);
   digitalWrite(n4,1);break;
   case '2':
      analogWrite(ena,127);
      analogWrite(enb,127);
      digitalWrite(n1,0);
       digitalWrite(n2,1);
         digitalWrite(n3,0);
   digitalWrite(n4,1);break;
   case '3':
      analogWrite(ena,127);
      analogWrite(enb,127);
      digitalWrite(n1,1);
       digitalWrite(n2,0);
         digitalWrite(n3,0);
   digitalWrite(n4,0);break;
       case '4':
      analogWrite(ena,127);
       analogWrite(enb,127);
      digitalWrite(n1,1);
       digitalWrite(n2,0);
         digitalWrite(n3,1);
   digitalWrite(n4,0);break;
       case '5':
      analogWrite(ena,0);
      analogWrite(enb,0);
      digitalWrite(n1,0);
       digitalWrite(n2,0);
         digitalWrite(n3,0);
   digitalWrite(n4,0);break;
    }
  }
      
      
      
      
      
}