int timer=500;
void setup()
{
  for(int pin=8;pin<14;pin++){
    pinMode(pin,OUTPUT);
  }
}

void loop()
{ 
  // <<
  /*for(int thisPin=8;thisPin<14;thisPin++){
    digitalWrite(thisPin,HIGH);
    delay(timer);
    digitalWrite(thisPin,LOW);
  }*/
  // >>
  for(int thisPin=13;thisPin>7;thisPin--){
    digitalWrite(thisPin,HIGH);
    delay(timer);
    digitalWrite(thisPin,LOW);
  }
}
