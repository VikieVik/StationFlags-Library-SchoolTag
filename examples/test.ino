/*
This example shows how to use basic function of StationFlags library.
note: Some ammount of delay should be provided as the eeprom write requires time
Intended to be used with SchoolTag remote station arduino source code from
https://bitbucket.org/school-tag/school-tag-remote-station-arduino/src/master/
Author: Aaron Roller & Vikas Singh
Date: 12 Oct 2019
Website:https://schooltag.org
*/

#include <StationFlags.h>

void setup()
{
    Serial.begin(115200);
}
void loop()
{
    Serial.Println("Program started.....");
    delay(1000);

    Serial.print("Flag Byte is: ");
    Serial.println(printFlagByte());
    delay(1000);

    Serial.print("clearing the flag byte ");
    Serial.println(clearFlagByte());
    delay(1000);

    Serial.print("setting RTC communication error; flag ");
    Serial.println(printFlagByte());
    delay(1000);

    Serial.print("setting RTC power lost flag ");
    Serial.println(printFlagByte());
    delay(1000);

    Serial.print("setting Low battery power flag");
    Serial.println(printFlagByte());
    delay(1000);

    Serial.print("The final flag byte is: ");
    Serial.print(printFlagByte());
    delay(1000);
}
