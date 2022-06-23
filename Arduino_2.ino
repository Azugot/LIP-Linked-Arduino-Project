// C++ code
//
int Teste = 0;

void setup()
{
  pinMode(7, INPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  Teste = digitalRead(7);
  if (Teste == HIGH) {
    digitalWrite(11, HIGH);
  } else {
    digitalWrite(11, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
