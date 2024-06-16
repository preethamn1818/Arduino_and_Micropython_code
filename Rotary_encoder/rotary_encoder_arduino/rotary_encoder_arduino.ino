const int clkPin = 2; // clock pin of the encoder
const int dtPin = 3; // data pin of the encoder
int lastEncoderState = 0;
int encoderValue = 0;

void setup() {
  pinMode(clkPin, INPUT);
  pinMode(dtPin, INPUT);
}

void loop() {
  int encoderState = digitalRead(clkPin) << 1 | digitalRead(dtPin);
  if (encoderState != lastEncoderState) {
    if (encoderState == 3) { // clockwise
      encoderValue++;
    } else if (encoderState == 2) { // counterclockwise
      encoderValue--;
    }
  }
  lastEncoderState = encoderState;
  Serial.println(encoderValue);
  delay(10); // adjust this value to change the sampling rate
}
