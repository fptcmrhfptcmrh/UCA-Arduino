#include "DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN,DHTTYPE);
void setup() {
  dht.begin();
  Serial.begin(9600);
  pinMode(7,OUTPUT);
}

void loop() {
  float h=dht.readHumidity();
  float t=dht.readTemperature();
  Serial.print("Humidity : ");
  Serial.print(h);
  Serial.print("   Temperature : ");
  Serial.println(t);
  if(h>=70&&t>=26){
    digitalWrite(7,HIGH);
  }
  else{
    digitalWrite(7,LOW);
  }
  delay(100);
}
