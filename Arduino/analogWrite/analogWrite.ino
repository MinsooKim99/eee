int led=9;
int bright=0;
int inputByte;
int fade=20;
void setup()
{
  pinMode(9,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  analogWrite(led,bright);
  
  if(Serial.available()>0){
    inputByte=Serial.read();
    if(inputByte=='H'){
      fade=20;
      while(bright<255){
        bright+=fade;
        analogWrite(led,bright);
        delay(500);
        if(bright>255){
          bright=255;
        }
      }
    }
    if(inputByte=='L'){
      fade=-20;
      while(bright>0){
        bright+=fade;
        analogWrite(led,bright);
        delay(500);
        if(bright<0){
          bright=0;
        }
      }
    }
  }
}
