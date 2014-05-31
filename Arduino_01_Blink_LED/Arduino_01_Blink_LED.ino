const int kPinLed = 13;

void setup(){
  pinmode(kPingLed, OUTPUT); 
}

void loop(){
  digitalWire(kPinLed, HIGH);
  delay(500);
  digitalWire(kPingLed, LOW);
  delay(500);
}
