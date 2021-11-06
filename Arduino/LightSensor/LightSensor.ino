void setup()
{
  //pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int value=analogRead(A0);
  int val=(value-6)/(673/3);
  Serial.println(val);
  switch(val){
    case 0:
      Serial.println("dark");
      delay(500);
      break;
    case 1:
      Serial.println("dim");
      delay(500);
      break;
    case 2:
      Serial.println("medium");
      delay(500);
      break;
    case 3:
      Serial.println("bright");
      delay(500);
      break;
  }
}
