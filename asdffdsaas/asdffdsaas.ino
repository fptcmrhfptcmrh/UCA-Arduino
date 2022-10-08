#define TRIG 9 
#include<Servo.h>
Servo servo;
#define ECHO 8
void setup() {
  Serial.begin(9600);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  servo.attach(3);
}
void loop()
{
  float duration, distance;
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  duration = pulseIn (ECHO, HIGH);
  distance = ((float)(340 * duration) / 10000) / 2; 
  Serial.print("\nDIstance : ");
  Serial.print(distance);
  Serial.println(" Cm");
  if (distance<=5){
    servo.write(90);
  }
  else{
    servo.write(0);
  }
  delay(100);
}
