#include <RCSwitch.h>
RCSwitch myswi=RCSwitch();

void setup() {
Serial.begin(9600);
myswi.enableReceive(8);  
}
 
void loop() {
if (myswi.available()){
  int val = myswi.getReceivedValue();
  Serial.println(myswi.getReceivedValue());
  if (val==0){
    Serial.print("Unknown encoding");
    }
  else{
    Serial.println(myswi.getReceivedValue());
    }  
  myswi.resetAvailable();
  }  

}
