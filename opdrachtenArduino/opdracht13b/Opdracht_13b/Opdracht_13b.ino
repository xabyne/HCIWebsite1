int speakerPin = 8;
void setup() { 
  pinMode(speakerPin, OUTPUT);
}

void loop() { 
  tone(speakerPin, 330, 200); delay(400);
  tone(speakerPin, 392, 200); delay(400);
  tone(speakerPin, 392, 200); delay(400);
  tone(speakerPin, 440, 200); delay(400);
  tone(speakerPin, 493, 200); delay(200);
  tone(speakerPin, 523, 200); delay(200);
  tone(speakerPin, 440, 200); delay(200);
  tone(speakerPin, 493, 200); delay(400);
  tone(speakerPin, 440, 200); delay(400);
  tone(speakerPin, 493, 200); delay(400);
  tone(speakerPin, 523, 200); delay(400);
  tone(speakerPin, 493, 200); delay(400);
  tone(speakerPin, 440, 200); delay(200);
  tone(speakerPin, 392, 200); delay(200);
  tone(speakerPin, 440, 200); delay(200);
  tone(speakerPin, 392, 200); delay(1000);
}
