void setup()
{
  Serial.begin(9600); //시리얼 통신을 하기위한 통신속도설정
  pinMode(8, INPUT_PULLUP);
  pinMode(6,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
}
void loop()
{
  int x=analogRead(A1);
  int y=analogRead(A0);
  int c=digitalRead(8);
  Serial.print(x); // X축 값이 표기됩니다
  Serial.print("  ");           //숫자가 헷깔리지않토록 중간에 공백칸을 두었습니다.
  Serial.print(y); // X축 값이 표기 됩니다.
  Serial.print("  ");           //숫자가 헷깔리지않토록 중간에 공백칸을 두었습니다
  Serial.println(c); // Z축(스위치) 값이 표기됩니다.
  analogWrite(6,x/4);
  analogWrite(3,y/4);
  if(c==1){
    digitalWrite(4,LOW);
  }
  else{
    digitalWrite(4,HIGH);
  }
  delay(100);             
}
