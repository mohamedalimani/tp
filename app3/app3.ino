int soundSensor = 0 ;
int led = 7 ;
void setup() {
  // put your setup code here, to run once:
pinMode(soundSensor,INPUT) ;
pinMode(led,OUTPUT) ;
Serial.begin(9600) ;
}

void loop() {
  // put your main code here, to run repeatedly:
int sound = analogRead(soundSensor) ;
if(sound > 600){
  Serial.println(sound) ;
  digitalWrite(led,HIGH) ;
}
else{
  digitalWrite(led,LOW) ;
  }
}
