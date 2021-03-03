int pushButton = 4 ;
int buzzer = 8 ;
void setup() {
  // put your setup code here, to run once:
pinMode(pushButton,INPUT) ;
pinMode(buzzer,OUTPUT) ;
Serial.begin(9600) ;
}

void loop() {
  // put your main code here, to run repeatedly:
boolean p = digitalRead(pushButton) ;
if(p){
tone(buzzer,500) ;
Serial.begin("buzzer") ;
}
else{
  noTone(buzzer) ;
  
  }
}
