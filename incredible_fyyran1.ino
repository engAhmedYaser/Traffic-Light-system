// C++ code
//
int led1 = 6;
int led2 = 11;
int led3 = 9;
void setup()
{
 pinMode( led1,OUTPUT);
   pinMode( led2,OUTPUT); 
  pinMode( led3,OUTPUT);
}

void loop()
{
  digitalWrite(led1, HIGH);
  delay(1000); 
  digitalWrite(led2, HIGH);
  delay(500); 
  digitalWrite(led2,LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500); 
   digitalWrite(led2,LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500); 
   digitalWrite(led2,LOW);
  digitalWrite(led1,LOW); 
  digitalWrite(led3, HIGH);
  delay(1000);
  digitalWrite(led3, LOW);
  
}