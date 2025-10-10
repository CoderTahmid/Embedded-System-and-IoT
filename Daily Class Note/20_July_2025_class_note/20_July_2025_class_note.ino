const int pirPin = 7;
const int ledPin = 5;

void setup() {
  Serial.begin(9600);
  /*
    Serial.begin()
    diye amra muloto amader terminal screen ta initialize kori arki
    C programming e amra jemon print kore terminal e dekhi 
    temon ekhane terminal e dekhar jonno jonno ebhabe Serial.begin() diye eta ke initialize kore nite hbe

    and ekhane jei value ta pass kora hoise 9600
    eta hocche baud rate
    what is baud rate?
    baud rate hocche basically amder ei terminal ta koto character per sec e dekhaite parbe sheia
    eta ek ekta board'r khetre ek ek rokom hoy
    Arduino UNO te baud rate etai fix
    */
  pinMode(pirPin, INPUT);
  /*
    PIR = passive infrared ray
    it's a sensor which sense mototion
    and sensor always sense kore data input ney
    er jonnei ekhane INPUT newa hoise
    */
  pinMode(ledPin, OUTPUT);
}

void loop() {

  int pirState = digitalRead(pirPin);
  /*
    digitalRead is oposite of digitalWrite()
    digitalRead() means read a value
    mane input newa ek kothay
    */

  if (pirState == HIGH) {
    Serial.println("Motion detected!");
    digitalWrite(ledPin, HIGH);
  } else {
    Serial.println("there is no motion");
    digitalWrite(ledPin, LOW);
  }
}