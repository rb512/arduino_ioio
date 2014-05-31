
const int k_numLEDs = 8;
const int kPinLeds[k_numLEDs] = {2,3,4,5,6,7,8,9};
//
void setup(){
  for(int i=0; i<k_numLEDs; i++){
    pinMode(kPinLeds[i], OUTPUT);   
  }
}
//
//int delayTime = 1000;
//
//void loop(){
//  
//  while(delayTime > 0){
//    digitalWrite(kPinLed, HIGH);
//    delay(delayTime);
//    digitalWrite(kPinLed, LOW);
//    delay(delayTime);
//    delayTime -= 300;
//  }
//}

int ledState = LOW;

void loop(){
  for(int i=0; i<k_numLEDs; i++){
     digitalWrite(kPinLeds[i], HIGH);
     delay(100);
  }
  for(int i=k_numLEDs-1; i>=0; i--){
     digitalWrite(kPinLeds[i], LOW);
     delay(100); 
  }
}
