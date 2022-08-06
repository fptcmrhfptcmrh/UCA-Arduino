#include<Stepper.h>
int stepsPerRev=2048;
Stepper stepper(stepsPerRev,11,9,10,8);

void setup() {
  stepper.setSpeed(10);
  Serial.begin(9600);
  pinMode(2,INPUT);
  pinMode(4,INPUT);
}

void loop() {
  int B=digitalRead(2);
  int B2=digitalRead(4);
  Serial.print(B);
  Serial.println(B2);
  if (B==HIGH){
    stepper.step(stepsPerRev);
  }
  if(B2==HIGH){
    stepper.step(-stepsPerRev);
  }
}
