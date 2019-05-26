#include <Servo.h>
Servo myServo; 
int servoPin = 9; 
int pos = 0;
 
int buttonPinL = 3;
int buttonPinR = 2;

void setup() {
  myServo.attach(servoPin);
  pinMode(buttonPinL, INPUT);
  pinMode(buttonPinR, INPUT);
}
void loop() {
    if (digitalRead(buttonPinL) == LOW && digitalRead(buttonPinR) == HIGH){
      pos--;
        if (pos < 160) {
          pos = 160;
        }
      delay(2); 
    }
    if (digitalRead(buttonPinL) == HIGH && digitalRead(buttonPinR) == LOW){
      pos++;
      if (pos > 0) {
        pos = 0;
      }
      delay(2);
    }
    if (pos >= 0 && pos <= 160) {
      myServo.write(pos);
    }
}
