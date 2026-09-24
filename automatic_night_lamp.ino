int ldr = A0;
int led = 9;
int buzzer = 10;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int lightValue = analogRead(ldr);

  Serial.println(lightValue);

  if (lightValue < 500)
  {
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
  }

  delay(500);
}
