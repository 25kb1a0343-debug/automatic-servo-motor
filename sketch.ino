
#include <Servo.h>

#define TRIG_PIN 6
#define ECHO_PIN 7
#define SERVO_PIN 9

Servo gateServo;

void setup() {
  Serial.begin(9600);

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  gateServo.attach(SERVO_PIN);
  gateServo.write(0);
}

void loop() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  long duration = pulseIn(ECHO_PIN, HIGH, 30000);

  if (duration == 0) {
    Serial.println("No echo");
    delay(200);
    return;
  }

  float distance = duration * 0.0343 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance <= 50) {
    gateServo.write(90);
    Serial.println("GATE OPEN");
  } else {
    gateServo.write(0);
    Serial.println("GATE CLOSED");
  }

  delay(200);
}
