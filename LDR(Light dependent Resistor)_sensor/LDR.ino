int l = A0;
void setup (){
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}
void loop(){
  int ldr = analogRead(l);

  Serial.println(ldr);
  if (ldr<10){
    digitalWrite(13,HIGH);

  }
  else{
    digitalWrite(13,LOW);
  }
  delay(1000);

}
