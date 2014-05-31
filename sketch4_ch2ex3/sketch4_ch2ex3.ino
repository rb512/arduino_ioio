const int kNumLEDs = 8;
const int kPinLEDs[kNumLEDs] = {2,3,4,5,6,7,8,9};

void setup(){
  for(int i=0; i<kNumLEDs; i++){
     pinMode(kPinLEDs[i], OUTPUT);
  } 
}

void loop(){
   for(int i=0; i<kNumLEDs; i++){
      digitalWrite(kPinLEDs[i], HIGH);
      delay(100);
      digitalWrite(kPinLEDs[i], LOW);
      delay(100);
    } 
    for(int i=kNumLEDs-1; i>=0; i--){
       digitalWrite(kPinLEDs[i], HIGH); 
       delay(100);
       digitalWrite(kPinLEDs[i], LOW);
       delay(100);
    }
}
