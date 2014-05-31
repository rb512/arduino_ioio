const int analogIn = A0;
float sensorValue = 0.0;
float zeroWeight = 75.96;
float bReading = 76.0;
float bLoad = 5.670;

float aReading = 100.0;
float aLoad = 169.0;

void setup(){
 Serial.begin(115200); 
}

void loop(){
  sensorValue = analogRead(analogIn);
 
//  Serial.print("Weight:");
//  float load = 0.0;
//  if(sensorValue > 16){
//     load = ((aLoad - bLoad)/(aReading - bReading)) * (sensorValue - bReading) + bLoad;
//  }
   
  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);
//  Serial.print(load);
//  Serial.println(" g");
  delay(1200);
}


