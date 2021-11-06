void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  int val=analogRead(A0);
  val=val/(1023/3);
  //Serial.println(val);
  if (val==0)
  {
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
  }
  else if (val==1)
  {
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
  }
  else if (val==2)
  {
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
  }
  else
  {
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
  }
  
  delay(10);
}
