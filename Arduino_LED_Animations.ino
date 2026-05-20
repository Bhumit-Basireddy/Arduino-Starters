int animationspeed = 0;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  animationspeed = 250;
  digitalWrite(LED_BUILTIN, HIGH);
  delay(animationspeed); // Wait for animationspeed millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(animationspeed); // Wait for animationspeed millisecond(s)
  digitalWrite(12, HIGH);
  delay(animationspeed); // Wait for animationspeed millisecond(s)
  digitalWrite(12, LOW);
  delay(animationspeed); // Wait for animationspeed millisecond(s)
  digitalWrite(11, HIGH);
  delay(animationspeed); // Wait for animationspeed millisecond(s)
  digitalWrite(11, LOW);
  delay(animationspeed); // Wait for animationspeed millisecond(s)
}
