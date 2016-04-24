int rele = 12;
int pulse = 22;
int state = 0;

void setup()

{
 pinMode(rele,OUTPUT);
 pinMode(pulse,INPUT);
 digitalWrite(rele,LOW);
}

void loop()
{
 state = digitalRead(pulse);
 
 if(state == HIGH)
 {
   digitalWrite(rele,HIGH);
 }
 
 if(state == LOW)
 {
   digitalWrite(rele,LOW);  
 }
}
