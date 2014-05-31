int speakerPin = 2;
int photoCellPin = 0;

void setup(){
  
}

void loop(){
   int reading = analogRead(photoCellPin); 
 int pitch = 10 + reading/4;
 tone(speakerPin, pitch);
}
