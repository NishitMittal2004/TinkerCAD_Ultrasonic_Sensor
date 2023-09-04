void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
}

void loop() {
  digitalWrite(2, LOW);
  delayMicroseconds(2);
  digitalWrite(2, HIGH);
  delayMicroseconds(10);
  digitalWrite(2, LOW);

  long duration = pulseIn(3, HIGH);
  int distance = duration * 0.034 / 2;
  // Speed of sound is approximately 0.034 cm/microsecond

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(1000);
}
