float sensorValue = 0; // variable for sensor value
int sensorPin = A0; // variable for sensor pin
int greenLedPin = 10; // variable for green LED pin

void setup() {
 Serial.begin(9600); 
 pinMode(sensorPin, INPUT); 
 pinMode(greenLedPin, OUTPUT); 
}
void loop() {
 sensorValue = analogRead(sensorPin); 
 Serial.println(sensorValue); 

 analogWrite(greenLedPin, sensorValue);
 
 delay(100); 
}
