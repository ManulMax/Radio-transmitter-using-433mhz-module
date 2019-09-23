#include <RCSwitch.h>

#define joyx A0
#define joyy A1

RCSwitch myswi=RCSwitch();
void setup() {
 myswi.enableTransmit(10);
 Serial.begin(9600);
}
boolean b=true;

void loop() {
  int x=analogRead(joyx);
  delay(10);
  Serial.println(x);
  int y=analogRead(joyy);
  delay(10);
  Serial.println(y);
  
if (b==true) {
  if(x>1000 && y<510){
    myswi.send("001"); //1 to forwrd
    }
  else if(x<10 && y<510){
    myswi.send("010"); //2 for backword
    }
  else if(y>1000 && x>500){
    myswi.send("011");  //3 for right
  }  
  else if(x>500 && y<10){
    myswi.send("100"); // 4 for left
    }
  }

else{
  myswi.send("000");
    }
}
