const int ledPin=13; // 신호를 줄 핀
int inputByte;		 // 입력받을 신호

void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  //시리얼로 입력받아서 껐다켰다
  if(Serial.available()>0){
  	inputByte=Serial.read();
    if(inputByte=='H'){
    	digitalWrite(ledPin,HIGH);
    }
    if(inputByte=='L'){
    	digitalWrite(ledPin,LOW);
    }
  }
}
