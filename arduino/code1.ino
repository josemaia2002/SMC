int green = 9;
int yellow = 10;
int red = 11;

void setup() {
 
  pinMode(green, OUTPUT);               
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
                
}

void loop() {
  digitalWrite(green, HIGH);    
  delay(2000);
  digitalWrite(green, LOW);

  digitalWrite(yellow, HIGH);    
  delay(1000);
  digitalWrite(yellow, LOW);

  digitalWrite(red, HIGH);    
  delay(3000);
  digitalWrite(red, LOW);  
}