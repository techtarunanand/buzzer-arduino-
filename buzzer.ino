const int buz=9;

void setup()
{
  pinMode(buz,OUTPUT);
  
}
void loop()
{
  tone(buz,1000);
  delay(1000);
  noT0one(buz);
  delay(1000);
}
