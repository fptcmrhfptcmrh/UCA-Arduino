#define laser 7
#define s 100
char* letters[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", ".." , ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." };
char* numbers[] = {"-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----." }; //0-9
void flashSequence(char* a) {
  int i=0;
  while(a[i] != NULL) {
    digitalWrite(laser, HIGH);
    if(a[i] == '.')
      delay(s);
    else
      delay(s*3);
    
    digitalWrite(laser, LOW);
    delay(s);
    i++;
  }
  delay(s*3);
}
void setup() {
  Serial.begin(9600);
  pinMode(laser,OUTPUT);
}
void loop() {
  char ch; 
  if(Serial.available()) {  
    ch = Serial.read();  
    Serial.print(ch); 
    if(ch >='a' && ch <= 'z') {
      flashSequence(letters[ch-97]); 
      Serial.println(letters[ch-97]); 
    } 
    else if(ch >='A' && ch <= 'Z') { 
      flashSequence(letters[ch-65]); 
      Serial.println(letters[ch-65]); 
    } 
    else if(ch >='0' && ch <= '9') {
      flashSequence(numbers[ch-48]); 
      Serial.println(numbers[ch-48]); 
    } 
    else if(ch <= ' ') 
      delay(s);
  }
} 
