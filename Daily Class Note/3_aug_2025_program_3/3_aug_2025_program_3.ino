#include <Servo.h>

int trigPin = 5;
int echoPin = 3;
long duration;
int distance;

int servoPin = 9;
Servo servo;
int angle = 0;

void setup() {
  pinMode(triPin, OUTPUT);
  pinMode(echoPin, INTPUT);
  Serial.begin(9600);
  servo.attach(servoPin);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  if (distance > 5) {
    for (angle = 0; angle < 180; angle += 100) {
      servo.write(angle);
      delay(15);
    }

    for (angle = 180; angle > 0; angle -= 100) {
      servo.write(angle);
      delay(15);
    }
  }
}
