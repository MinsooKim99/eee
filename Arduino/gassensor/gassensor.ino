#define RED 7
#define GREEN 8
#define PIEZO 2
void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(PIEZO,OUTPUT);
  pinMode(RED,OUTPUT);
  pinMode(GREEN,OUTPUT);
}

void loop()
{
  int gas=analogRead(A0);
  Serial.println(gas);
  delay(100);
  if(gas>100)
  {
    digitalWrite(RED,HIGH);
    digitalWrite(GREEN,LOW);
    tone(PIEZO,250); //시끄럽다!
  }
  else
  {
    digitalWrite(RED,LOW);
    digitalWrite(GREEN,HIGH);
    noTone(PIEZO);
  }
}
