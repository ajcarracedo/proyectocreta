 const byte PIN_BUTTON_A = 52;
 const byte PIN_BUTTON_C = 50;
 const byte PIN_BUTTON_E = 48;
 const byte PIN_BUTTON_K = 46;
 const byte PIN_ANALOG_X = 11;
 
 const byte PIN_BUTTON_B = 53;
 const byte PIN_BUTTON_D = 51;
 const byte PIN_BUTTON_F = 49;
 const byte PIN_ANALOG_Y = 10;
 
 boolean pressed_a = false;
 boolean pressed_b = false;
 boolean pressed_c = false;
 boolean pressed_d = false;
 boolean pressed_e = false;
 boolean pressed_f = false;
 boolean pressed_k = false;

 int analog_x = 0;
 int analog_y = 0;
 
 void setup() {
   Serial.begin(57600);
   Serial3.begin(57600);
   
   pinMode(PIN_BUTTON_A, INPUT);
   digitalWrite(PIN_BUTTON_A, HIGH);
   
   pinMode(PIN_BUTTON_B, INPUT);
   digitalWrite(PIN_BUTTON_B, HIGH);
   
   pinMode(PIN_BUTTON_C, INPUT);
   digitalWrite(PIN_BUTTON_C, HIGH);
   
   pinMode(PIN_BUTTON_D, INPUT);
   digitalWrite(PIN_BUTTON_D, HIGH);
   
   pinMode(PIN_BUTTON_E, INPUT);
   digitalWrite(PIN_BUTTON_E, HIGH);
   
   pinMode(PIN_BUTTON_F, INPUT);
   digitalWrite(PIN_BUTTON_F, HIGH);
   
   pinMode(PIN_BUTTON_K, INPUT);
   digitalWrite(PIN_BUTTON_K, HIGH);
   }
   
   void loop() { 
    
    if(pressed_a == digitalRead(PIN_BUTTON_A)){ 
      Serial.println("a");Serial3.println("a");
   }
   if(pressed_b == digitalRead(PIN_BUTTON_B)){
      Serial.println("b");Serial3.println("b");
   } 
   if(pressed_c == digitalRead(PIN_BUTTON_C)){ 
      Serial.println("c");Serial3.println("c");
   } 
   if(pressed_d == digitalRead(PIN_BUTTON_D)){ 
      Serial.println("d");Serial3.println("d");
   } 
   if(pressed_e == digitalRead(PIN_BUTTON_E)){ 
      Serial.println("e");Serial3.println("e");
   } 
   if(pressed_f == digitalRead(PIN_BUTTON_F)){ 
      Serial.println("f");Serial3.println("f");
   } 
    if(pressed_k == digitalRead(PIN_BUTTON_K)){ 
      Serial.println("k");Serial3.println("k");
   }

   analog_x = analogRead(PIN_ANALOG_X);
   analog_y = analogRead(PIN_ANALOG_Y);
   Serial.print("x=");Serial3.print("x=");
   Serial.print(analog_x);Serial3.print(analog_x);
   Serial.print(" ");Serial3.print(" ");
   Serial.print("y=");Serial3.print("y=");
   Serialhuy.println(analog_y);Serial3.println(analog_y);
   
   delay(100);
 }
