#include <Servo.h> 
Servo myServo;
int servoPin = 9; 
int pos = 0;


void setup() {
  myServo.attach(servoPin); 
}

void loop() {
//  for(pos = 0; pos < 160; pos += 1){ 
//    myServo.write(pos); 
//    delay(15);
//  }
//  
//  for(pos = 160; pos >= 1; pos -= 1){
//    myServo.write(pos);
//    delay(15); 
//  }
myServo.write(0);
  delay(300);
  myServo.write(160);
  delay(300);
  myServo.write(40);
  delay(500);
  myServo.write(120);
  delay(500);
  myServo.write(0);
  delay(400);
  for(pos = 0; pos < 180; pos += 1){
    myServo.write(pos);
    delay(10);
}
} 
