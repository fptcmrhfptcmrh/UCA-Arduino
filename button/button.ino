void setup() {
  Serial.begin(9600);
  pinMode(12,INPUT);
  pinMode(13,OUTPUT);

  pinMode(7,INPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  int buttonValue13=digitalRead(12);
  int buttonValue8=digitalRead(7);
  Serial.println(buttonValue13);
  Serial.println(buttonValue8);
  delay(10);
  if(buttonValue13==0){
    digitalWrite(13,HIGH);
  }
  else{
    digitalWrite(13,LOW);
  }
  if(buttonValue8==0){
    digitalWrite(8,HIGH);
  }
  else{
    digitalWrite(8,LOW);
  }
}
