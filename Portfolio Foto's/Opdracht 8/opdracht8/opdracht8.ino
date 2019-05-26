float sensorValue = 0; // variable for sensor value 
float sensorPin = A0; // variable for sensor pin

int greenLedPin = 10; 
int yellowLedPin = 9;

void setup() { 
  pinMode(sensorPin, INPUT); 
  Serial.begin(9600);
  pinMode(greenLedPin, OUTPUT); 
  pinMode(yellowLedPin, OUTPUT);
}

void loop() {
sensorValue = analogRead(sensorPin); // read the value/voltage on the sensor pin and // store that value in the variable sensorValue
//Serial.println(sensorValue); // print out sensorValue to the Serial Monitor
//sensorValue = (sensorValue/1023)*255;
//analogWrite(greenLedPin, sensorValue); 
//analogWrite(yellowLedPin, sensorValue);
//delay(200); // delay for 0.2 seconds 

 Serial.print("sensor = ");
 sensorValue = map(sensorValue, 95, 370, 0, 255);
 
 
 Serial.println(sensorValue);
 analogWrite(greenLedPin, sensorValue);
 analogWrite(yellowLedPin, 255-sensorValue);
 delay(200); // delay for 0.2 seconds

}
