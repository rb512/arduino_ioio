const int kNumLEDs = 8;
const int kPinLeds[kNumLEDs] = {2,3,4,5,6,7,8,9};

void setup(){
  for(int i=0; i<kNumLEDs; i++){
   pinMode(kPinLeds[i], OUTPUT); 
  }
}

int delayTime = 100;
void loop(){
  for(int i=0; i<kNumLEDs; i++){
     if(i%2 == 0){
        digitalWrite(kPinLeds[i], HIGH);
        delay(delayTime); 
     }else{
       digitalWrite(kPinLeds[i], LOW);
        delay(delayTime); 
     }
  }
  for(int i=kNumLEDs-1; i>=0; i--){
   if(i%2 == 0){
        digitalWrite(kPinLeds[i], LOW);
        delay(delayTime); 
     }else{
       digitalWrite(kPinLeds[i], HIGH);
        delay(delayTime); 
     }
  }
}
