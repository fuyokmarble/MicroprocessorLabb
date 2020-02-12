void setup(){
  DDRD = 0b11111111;
  DDRC = 0b000000;
  
}

void loop(){
  int i = 0;
  PORTD = 0b00000001;
  while(i<=7)
  {
    if(digitalRead(A4) == 0)
    {
      PORTD = PORTD << 1;
      i++;
      delay(300);
    }
    if(digitalRead(A0) == 0)
    {
      PORTD = PORTD >> 1;
      i--;
      delay(300);
    }
  }
 

  
}
