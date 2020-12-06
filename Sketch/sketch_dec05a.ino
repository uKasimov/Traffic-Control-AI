void setup()
{
Serial.begin(9600); //initialize serial COM at 9600 baudrate
pinMode(LED_BUILTIN, OUTPUT); //make the LED pin (13) as output
digitalWrite (LED_BUILTIN, LOW);
Serial.print(1);
}

void loop()
{
  int data = 0;
while (Serial.available())
{
  data = Serial.read();
}
if (data == '1') {
  Serial.print(1);
  digitalWrite (LED_BUILTIN, HIGH);
}
else if (data == '0') {
  Serial.print(0);
  digitalWrite (LED_BUILTIN, LOW);
}
}
