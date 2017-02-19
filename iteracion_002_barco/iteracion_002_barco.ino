int rele = 12;
int pulse = 22;
int state = 0;
String s = "";

void setup()
{
 Serial3.setTimeout(50);
 Serial3.begin(57600);
 Serial.begin(57600);
 
 pinMode(rele,OUTPUT);
 pinMode(pulse,INPUT);
 digitalWrite(rele,LOW);
}

void loop()
{
 if (Serial3.available() > 0) {
    s = Serial3.readString();
    Serial.println(s);
  }
  
 state = digitalRead(pulse);
 
 if(state == HIGH)
 {
   digitalWrite(rele,HIGH);
 }
 
 if(state == LOW)
 {
   digitalWrite(rele,LOW);    

 }

  delay(100);

}
