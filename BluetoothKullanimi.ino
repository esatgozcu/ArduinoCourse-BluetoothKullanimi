#include <SoftwareSerial.h>

SoftwareSerial mySerial(3, 2); // RX, TX

void setup() {

  Serial.begin(9600);
  mySerial.begin(9600);
}

void loop() {
  
  if(mySerial.available())
  {
    char karakter = mySerial.read();
    Serial.println(karakter);
  }
}


