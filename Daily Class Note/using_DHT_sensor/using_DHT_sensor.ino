// using DHT sensor

#include <dht.h>
#define dhtPin 8
dht DHT;

void setup() {
  Serial.begin(9600);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  int readData = DHT.read11(dhtPin);
  float t = DHT.temperature;
  float h = DHT.humidity;

  if (t > 20) {
    digitalWrite(3, HIGH);
    delay(100);
    digitalWrite(3, LOW);
    delay(100);
  }
}