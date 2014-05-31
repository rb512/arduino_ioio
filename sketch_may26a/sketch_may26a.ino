String name="";
boolean nameEntered = false;

void setup(){
 Serial.begin(115200); 
 Serial.println("Please enter your name:");
}

void loop(){
 while(Serial.available()){
  char readChar = (char)Serial.read();
  if(readChar == '\n'){
    nameEntered = true;
    continue;
  } 
  name += readChar;
 }
 
   if(nameEntered){
    Serial.print("Hello ");
    Serial.print(name);
    Serial.println("!"); 
    
    name = "";
    nameEntered = false;
   }
 }
