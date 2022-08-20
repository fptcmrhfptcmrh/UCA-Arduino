void setup() {
  Serial.begin(9600);
}
void loop() {
  char ch; 
  if(Serial.available()) {  
    ch = Serial.read();  
    Serial.print(ch); 
    if(ch>='a'&&ch<='z'){
      Serial.print("ok");
    }
  }
}
