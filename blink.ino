int Led_pin=D4;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(Led_pin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Led_pin,LOW);
  delay(50);
  digitalWrite(Led_pin,HIGH);
  delay(50);

}
