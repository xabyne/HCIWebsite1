import processing.serial.*;
Serial myPort;
String sensorReading="";
void setup() {
 size(400, 400);
 myPort = new Serial(this, Serial.list()[5], 9600); // instead of 5, choose what even serial port the Arduino connects to
 myPort.bufferUntil('\n');
}
void draw() {
 background(#f4bada);
 fill(45);
 text("Sensor Reading: " + sensorReading, 40, 40);
 rect(width/6, height/6, float(sensorReading), float(sensorReading));

}


void serialEvent (Serial myPort) {
 sensorReading = myPort.readStringUntil('\n');
}
