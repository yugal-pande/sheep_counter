int count=0;
int p1=1;
int p2=2;

void setup()
{
  pinMode(p1,INPUT);
  pinMode(p2,INPUT);
  Serial.begin(9600);
}

void loop()
{
  if(digitalRead(p1)==1)
  {
    delay(1000);
    if(digitalRead(p2)==1)
    {
      count++;
      Serial.println(count);
    }
    delay(2000);
  }
  if(digitalRead(p2)==1)
  {
    delay(1000);
    if(digitalRead(p1)==1)
    {
      count--;
      Serial.println(count);
    }
    delay(2000);
  }
}