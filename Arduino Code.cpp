const int buttonPin = 2;  // 푸시 버튼이 연결된 핀 번호
int buttonState = 0;      // 현재 버튼 상태

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);  // 버튼 핀을 풀업 입력으로 설정
  Serial.begin(9600);  // 시리얼 통신 시작
}

void loop() {
  buttonState = digitalRead(buttonPin);  // 버튼 상태 읽기

  if (buttonState == LOW) {  // 버튼이 눌렸는지 확인
    Serial.println("SLEEP");  // 시리얼 포트로 "SLEEP" 신호 전송
    delay(500);  // 디바운싱을 위해 약간의 지연
  }
}
