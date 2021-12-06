joyPin X Y Z 조이스틱 입력핀 A0 A1 2로 설정
ledPinJoy Up Down Left Right Z 조이스틱 led핀 4 5 6 7 8로 설정
buttonPin A B 버튼 입력핀 10 11로 설정
ledPinButton A B 버튼 led핀 12 13으로 설정
buttonState A B = 0
buttonLastState A B = 0
void setup() {
  5 6 7 8 9 12 13 핀모드 output
  A0 A1 2 3 4 10 11 핀모드 input
}

void loop() {
  1)
  7장참고 조이스틱 연결
  A0 A1로 조이스틱값 받아오기
  if (xvalue=어쩌고 && yvalue=어쩌고){
    4번핀 HIGH 567 LOW
    }
  else if (xvalue=어쩌고 && yvalue=어쩌고){
    5번핀 HIGH 467 LOW
    }
  else if {xvalue=어쩌고 && yvalue=어쩌고}{
    6번핀 HIGH 457 LOW
    }
  else if (xvalue=어쩌고 && yvalue=어쩌고){
    7번핀 HIGH 456 LOW
    }
  else{
    4567 LOW
    }

  2)
  z값 digitalRead로 읽어와서
  if (zvalue==HIGH){
    ledPinJoyZ HIGH 입력
    }
  else{
    ledPinJoyZ LOW 입력
    }

  3)
  팅커캐드 버튼연습 참조 + 3-하 참조 버튼 디바운스방지 설정
}
