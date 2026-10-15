int max=150;
void setup() {
  pinMode(3,OUTPUT);
  pinMode(9,OUTPUT);
  digitalWrite(7,LOW);
}
void loop() {
  if(analogRead(A0)>=max){
    alarm();
    flash();
    digitalWrite(9,HIGH);
  }
  else{
    digitalWrite(9,LOW);
  }
}
void alarm(){
  tone(9,400,500);
  delay(500);
  tone(9s,650,500);
  delay(500);
}
void flash(){
  digitalWrite(3,HIGH);
  delay(50);
  digitalWrite(3,LOW);
}


