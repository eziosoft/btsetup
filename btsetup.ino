
/*Bluetooth Setup for MultiWii
June 2013 V0.1b
 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 any later version. see <http://www.gnu.org/licenses/>
*/


String BTName = "QUAD"; //<-Enter your name here
String PIN = "1234"; //<-Enter your pin here

void setup() {
  Serial.begin(9600);
  BTSet();

  Serial.begin(19200);
  BTSet();

  Serial.begin(38400);
  BTSet();

  Serial.begin(57600);
  BTSet();

  Serial.begin(115200);
  BTSet();

  digitalWrite(13, HIGH);

}

void BTSet()
{
  delay(100);
  digitalWrite(13, LOW);
  Serial.print("AT");
  delay(1000);
  Serial.print("AT+NAME"+BTName);
  delay(1000);
  Serial.print("AT+PIN"+PIN);
  delay(1000);
  Serial.print("AT+BAUD8");
  delay(1000);
  if(Serial.available())
  digitalWrite(13, HIGH);
}

void loop() {

}


















