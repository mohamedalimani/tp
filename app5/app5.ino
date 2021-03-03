int temp = 0 ;
int led = 5 ;
const int B = 4275;               // B value of the thermistor
const int R0 = 100000; 
void setup() {
  // put your setup code here, to run once:
pinMode(temp,INPUT) ;
pinMode(led,OUTPUT) ;
Serial.begin(9600) ;
}

void loop() {
  // put your main code here, to run repeatedly:
  int a = analogRead(temp);

    float R = 1023.0/a-1.0;
    R = R0*R;

    float t = 1.0/(log(R/R0)/B+1/298.15)-273.15 ; 

    Serial.print("temperature = ");
    Serial.println(t);
    if(t > 22){
      digitalWrite(led,HIGH) ;
      }
      else {
        digitalWrite(led,LOW) ;
        }

  }
