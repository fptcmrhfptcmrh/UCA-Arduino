#include<Servo.h>
Servo servo;
void setup() {
  Serial.begin(9600);
  servo.attach(9);
  pinMode(7,OUTPUT);
  pinMode(8,INPUT);
}

void loop() {
  float light=analogRead(A0);
  int button=digitalRead(8);
  Serial.print(light);
  if (button==HIGH){
    digitalWrite(7,LOW);
    Serial.println("  Button OFF");
  }
  else{
    digitalWrite(7,HIGH);
    Serial.println("  Button ON");
  }
  float turn=light/1024*180;
  servo.write(turn);
  delay(100);
}
