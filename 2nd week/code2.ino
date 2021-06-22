int BUTTONstate1 = 0;
int BUTTONstate2 = 0;

void setup() {
 
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
}

void loop() {
  BUTTONstate1 = digitalRead(10);
  BUTTONstate2 = digitalRead(11);
  
  if (BUTTONstate1 == HIGH)
  {
    mod2();
  } 

  if (BUTTONstate2 == HIGH)
  {
    mod1();
  } 
}

void mod1(){
  digitalWrite(8, HIGH);    
  delay(500);
  digitalWrite(8, LOW);  

  digitalWrite(9, HIGH);    
  delay(500);
  digitalWrite(9, LOW);  
}

void mod2(){
  digitalWrite(8, HIGH);    
  delay(100);
  digitalWrite(8, LOW);  

  digitalWrite(9, HIGH);    
  delay(100);
  digitalWrite(9, LOW);  
}