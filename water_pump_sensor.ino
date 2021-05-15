const int sensorPin = 9;
const int motorPin = 10;
const int analog_0=0;
int val= 0;


void setup() {
  Serial.begin(9600);
  // pinMode( sensorPin, INPUT);
  pinMode( 10, OUTPUT);
 
}

void loop() {
val= analogRead(analog_0);
{Serial.println(val);
  delay(500);
  if(val>20)
  {digitalWrite(motorPin,LOW);}
  else{digitalWrite(motorPin,HIGH);}
}}
