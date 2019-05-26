int greenLedPin = 10;
int yellowLedPin = 9;
void setup() {
 pinMode(greenLedPin, OUTPUT);
 pinMode(yellowLedPin, OUTPUT);
}

void loop(){
  for (int brightness=0; brightness <256; brightness++){
    analogWrite(yellowLedPin, brightness);
    analogWrite(greenLedPin, 255 - brightness);
    delay(10);
  }
    
 for (int brightness=255; brightness >0; brightness--){
    analogWrite(yellowLedPin, brightness);
    analogWrite(greenLedPin, 255 - brightness);
    delay(10);
  } 
}
