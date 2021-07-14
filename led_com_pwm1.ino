// C++ code
//
void setup(){
  pinMode(3, OUTPUT);
  digitalWrite(3, LOW);
}

void loop(){
  delay(500);
  analogWrite(3, 0);
  delay(500);
  analogWrite(3, 25);
  delay(500);
  analogWrite(3, 50);
  delay(500);
  analogWrite(3, 75);
  delay(500);
  analogWrite(3, 100);
  delay(500);
  analogWrite(3, 125);
  delay(500);
  analogWrite(3, 150);
  delay(500);
  analogWrite(3, 175);
  delay(500);
  analogWrite(3, 200);
  delay(500);
  analogWrite(3, 225);
  delay(500);
  analogWrite(3, 250);
  delay(500);
  analogWrite(3, 255);
}