void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}
void loop()
{
  if (Serial.available() > 0) {
    
  int gelen = Serial.read();
  
if (gelen == '1')
{
  digitalWrite(13, HIGH);
}
else 
{
  digitalWrite(13, LOW);
}
Serial.flush();
}
}
