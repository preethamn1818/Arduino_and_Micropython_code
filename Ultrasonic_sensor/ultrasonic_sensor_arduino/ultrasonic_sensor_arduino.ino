const int trigPin = 2;  // Trigger Pin of Ultrasonic Sensor
const int echoPin = 3;  // Echo Pin of Ultrasonic Sensor

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int duration, distance;
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = (duration * 0.034) / 2;

  Serial.print("Distance: ");
  Serial.println(distance);
  delay(1000);
}
