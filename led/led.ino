void setup() {
  pinMode(2,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
}
void loop() {
  digitalWrite(2,HIGH);
  delay(100);
  digitalWrite(7,HIGH);
  delay(100);
  digitalWrite(8,HIGH);
  delay(500); 
  digitalWrite(2,LOW);
  delay(100);
  digitalWrite(7,LOW);
  delay(100);
  digitalWrite(8,LOW);
  delay(500);
}
