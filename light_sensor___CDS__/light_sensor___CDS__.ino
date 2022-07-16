void setup() {
  Serial.begin(9600);
  pinMode(7,OUTPUT);
}
w
void loop() {
  int lightValue = analogRead(A0);
  Serial.println(lightValue);
  if (lightValue<300){
    digitalWrite(7,HIGH);
  }
  else{
    digitalWrite(8,LOW);
  }
  delay(500);
}
