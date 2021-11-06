const int ledPin=13; // 신호를 줄 핀
int inputByte;		 // 입력받을 신호

int ledState=LOW;
unsigned long perviousM=0;    // LED 상태가 바뀐 시간
const long interval=1000; // 깜빡이는 간격
void setup()
{
  pinMode(13, OUTPUT);
  //Serial.begin(9600); // 시리얼 입력할때만
}

void loop()
{
  unsigned long currentM = millis(); // 현재시간 받기
  if (currentM-perviousM>interval){  // 현재시간-작동시간>주기 일때
  	perviousM=currentM;
    if (ledState==LOW){// 꺼져있으면
    	ledState=HIGH; // 키고
    }
    else{			   // 커져있으면
    ledState=LOW;      // 끄고
    }
    digitalWrite(ledPin,ledState); // 현재 LED상태로 신호
  }
}
