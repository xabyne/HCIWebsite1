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
  sensorValue = analogRead(sensorPin); 
  Serial.println(sensorValue); // print out sensorValue to the Serial Monitor
//  sensorValue = (sensorValue/1023)*255;
  analogWrite(greenLedPin, sensorValue); 
  analogWrite(yellowLedPin, sensorValue);
//  sensorValue = (sensorValue/1023)*6;
  sensorValue = map(sensorValue, 0, 1023, 0, 255);
  delay(200); // delay for 0.2 seconds
}
