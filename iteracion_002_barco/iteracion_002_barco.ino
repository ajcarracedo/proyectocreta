int rele = 12;
int led = 36;
int state = 0;
String s = "";

void setup()
{
 Serial3.setTimeout(50);
 Serial3.begin(57600);
 Serial.begin(57600);
 
 pinMode(rele,OUTPUT);
 pinMode(led,OUTPUT);
 digitalWrite(rele,LOW);
 digitalWrite(led,LOW);
}

void loop()
{
 if (Serial3.available() > 0) {
    s = Serial3.readStringUntil('\n');
    Serial.println(s);

    if(s.length() == 2)
    {
      if(s == "a\r")
      {
        Serial.println("A pulsada");        

          digitalWrite(rele,HIGH);
          digitalWrite(led,HIGH);
          delay(100);
        }
        else if(s == "e\r")
      {
        Serial.println("E pulsada");
        digitalWrite(rele,LOW);
        digitalWrite(led,LOW);   
      }
      }
      
    }

    Serial.println("--------");
      delay(100);
  }

