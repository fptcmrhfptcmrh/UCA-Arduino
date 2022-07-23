void setup() {
  pinMode(3,OUTPUT);
}
void loop() {
//  digitalWrite(3,HIGH);
//  delay(1000);
//  digitalWrite(3,LOW);
//  delay(1000);
  for (int i=0; i<256;i++){
    analogWrite(3,i);
    delay(10);
  }
  for (int i=256; i>=0;i--){
    analogWrite(3,i);
    delay(10);
  }
}
