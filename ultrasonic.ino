// Define Ultrasonic Sensor Pins
int trig = 9;
int echo = 8;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600); // Start Serial Communication
}

void loop() {
  // Send a short LOW pulse to ensure clean HIGH signal
  digitalWrite(trig, LOW);
  delayMicroseconds(2);

  // Send 10µs pulse to trigger ultrasonic burst
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  // Measure time taken for echo to return
  long duration = pulseIn(echo, HIGH);

  // Convert duration to distance in cm
  float distance_cm = duration * 0.0343 / 2;

  // Convert cm to feet
  float distance_ft = distance_cm / 30.48;

  // Display distances
  Serial.print("Distance in cm: ");
  Serial.println(distance_cm);
  Serial.print("Distance in feet: ");
  Serial.println(distance_ft);

  // Delay before next reading
  delay(1000); // 1 second instead of 10 seconds for better refresh
}
