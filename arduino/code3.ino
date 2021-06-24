int buzzer = 8;
int green = 9;
int yellow = 10;
int red = 11;
int button = 12;

int buttonState = 0;    
int lastButtonState = 0; 
int startPressed = 0;    
int endPressed = 0;      
int holdTime = 0;        
        
void setup() {

  pinMode(buzzer, OUTPUT);    
  pinMode(green, OUTPUT);               
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(button, INPUT);               
}

void loop() {
  light();

  buttonState = digitalRead(button);

  if (buttonState != lastButtonState) {
    updateState();
  }
  lastButtonState = buttonState;        
 
}


void updateState() {
  
  if (buttonState == HIGH) {
      startPressed = millis();

  } else {
      endPressed = millis();
      holdTime = endPressed - startPressed;

      if (holdTime >= 4000) {
        off(); 
      }

  }
}


void light(){
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


void off(){
  digitalWrite(buzzer, HIGH);    
  digitalWrite(green, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(red, LOW);
  delay(2000); 
  digitalWrite(buzzer, LOW);
}