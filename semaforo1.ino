// C++ code
//
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(1, OUTPUT);
}

void loop()
{
  digitalWrite(3, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(3, LOW);
  digitalWrite(2, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(2, LOW);
  digitalWrite(1, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(1, LOW);
}