//the setup function runs once when you press reset or power the boward
void setup() {
  //initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

//the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH); //turn the led ON
  digitalWrite(12, LOW); //turn the led OFF
  delay(500);

  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
}
