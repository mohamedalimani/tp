int lightSensor = 0 ;
int led = 5 ;
void setup() {
  // put your setup code here, to run once:
pinMode(lightSensor,INPUT) ;
pinMode(led,OUTPUT) ;
Serial.begin(9600) ;
}

void loop() {
  // put your main code here, to run repeatedly:
  int l = analogRead(lightSensor);
Serial.println(l) ;
    if(l > 600){
      digitalWrite(led,HIGH) ;
      }
      else {
        digitalWrite(led,LOW) ;
        }

  }
