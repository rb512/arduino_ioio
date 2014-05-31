const int kPinTemp = A0;

void setup(){
 Serial.begin(9600);
}


void loop(){
  int reading = analogRead(kPinTemp);
  Serial.print("pin reading: ");
  Serial.println(reading);
  delay(500);
}

