void setup(){
 DDRB = DDRB | B00110000; 
 //DDRH = DDRH | B01000000; 
}
void loop(){
 PORTB = PORTB | B00110000; 
 //PORTH = PORTH | B01000000; 
}