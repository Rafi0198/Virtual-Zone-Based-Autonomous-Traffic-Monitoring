#include<cvzone.h>

SerialData serialData(1,1); 
int valsRec[2];

#define alert 4



void setup() {
  // put your setup code here, to run once:

  //Serial.begin(9600); 
  serialData.begin(9600); 
  pinMode(alert, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

  serialData.Get(valsRec);

  if (valsRec[0]==1) 
   {

        digitalWrite(alert,HIGH);
        delay(200);
        digitalWrite(alert,LOW);
        delay(200);
        digitalWrite(alert,HIGH);
        delay(200);
        digitalWrite(alert,LOW);
        delay(200);
        valsRec[0]=0;
   }

}
