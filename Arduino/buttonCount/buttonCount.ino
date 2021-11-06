int count=0;
int buttonState=0;
int buttonLastState=0;
void setup()
{
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  buttonState=digitalRead(2);
  if(buttonState!=buttonLastState){
    if(buttonState==HIGH){
      digitalWrite(11,HIGH);
      count++;
      Serial.print("count value: ");
      Serial.println(count);
    }
    else{
      digitalWrite(11,LOW);
    }
    buttonLastState=buttonState;
  }
}
