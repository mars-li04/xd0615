void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  int i;
  for(i=0;i<8;i++)
  {
    if(i%2==0)
    {
  digitalWrite(i, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(i+1, HIGH);
  digitalWrite(i, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(i+1, LOW);
    }
}
  int j;
  for(j=0;j<8;j++)
  {
    if(j%2==0)
    {
    digitalWrite(j, HIGH);
    delay(j*100); // Wait for 1000 millisecond(s)
    digitalWrite(j, LOW);
    delay(j*100); // Wait for 1000 millisecond(s)
    }
  }
}
