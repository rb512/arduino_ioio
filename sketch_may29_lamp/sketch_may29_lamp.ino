int lamp = 8;

void setup(){
  pinMode(lamp, OUTPUT);
}

void loop(){
 digitalWrite(lamp, HIGH);
 delay(10000);
 digitalWrite(lamp, LOW); 
}
  
  
