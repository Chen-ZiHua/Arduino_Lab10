#include<IRremote.h>
const int buttonPin=4;
int buttonState=0;

IRsend irsend;
void setup()
{
  pinMode(buttonPin,INPUT);
}

void loop()
{
  buttonState = digitalRead(buttonPin);
  if(buttonState==HIGH)
  {
    irsend.sendNEC(0x04FB48B7,32);
  }
}

