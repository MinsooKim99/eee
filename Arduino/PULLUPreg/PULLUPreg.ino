void setup()
{
  Serial.begin(9600);
  pinMode (13, OUTPUT);
  //pinMode (2, INPUT_PULLUP); //풀업저항 사용
  pinMode (2, INPUT); //풀업저항 직접만들어서 사용
}

void loop()
{
  int input_value=digitalRead(2);
  Serial.println(input_value);
  if(input_value==HIGH){
    digitalWrite(13,HIGH);
  }
  else{
    digitalWrite(13,LOW);
  }
}
