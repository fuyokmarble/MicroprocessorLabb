int clk_pin = 11;//SHCP
int latch_pin = 12;//STCP
int data_pin = 13;//DS
int i=0;
int map7seg[16] = {
  0b00111111, //0
  0b00000110, //1
  0b01011011, //2
  0b01001111, //3
  0b01100110, //4
  0b01101101, //5
  0b01111101, //6
  0b00100111, //7
  0b01111111, //8
  0b01101111, //9
  0b01110111, //A
  0b01111100, //b
  0b01011000, //c
  0b01011110, //d
  0b01111001, //E
  0b01110001, //F 
};
void setLED(uint16_t state){
   digitalWrite(latch_pin,LOW);
   for(i = 0 ; i < 16 ; i++){
    digitalWrite(data_pin,(state>>(15-i)) & 0x01);
    digitalWrite(clk_pin,HIGH);
    digitalWrite(clk_pin,LOW);
   }
   digitalWrite(latch_pin,HIGH);
}
void setup() {
  pinMode(clk_pin,OUTPUT);
  pinMode(latch_pin,OUTPUT);
  pinMode(data_pin,OUTPUT);
  }

void loop()
{
  for(i=0;i<16;i++);
 setLED(map7seg[i]);
  delay(1000);
}
