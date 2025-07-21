const int pirPin = 7;
const int ledPin = 5;

void setup(){
  Serial.begin(9600);
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop(){
  
  int pirState = digitatRead(pirPin);
  
  if (pirState){
    Serial.println("Motion detected!);
    digitalWrite(ledPin);
  } else {
      Serial.println("there is no motion");       
  }
}