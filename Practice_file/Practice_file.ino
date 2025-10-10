// using DHT sensor

#include <dht.h>
#define <

void setup() {
  pinMode(7, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(8, HIGH);
  delay(10);
  digitalWrite(8, LOW);
  delay(10);
}