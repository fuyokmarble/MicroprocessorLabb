
int i=0;
void setup()
{
  DDRD = 0b01110000; //PD4-6
}

void loop()
{
  for(i=0;i<8;i++){
  //PORTD = 0b01000000;
    digitalWrite(5, HIGH); // Data Pin
    digitalWrite(6, HIGH); // Clock Pin
  delay(10);
    digitalWrite(6, LOW);
  //PORTD = 0b00000000;
  delay(10);
}
  digitalWrite(4, HIGH); // Output register Clock
  delay(10);
  digitalWrite(4, LOW); 
  delay(10);
  //delay(100);
}
