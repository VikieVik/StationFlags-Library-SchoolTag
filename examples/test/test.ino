/*
This example shows how to use basic function of StationFlags library.
note: Some ammount of delay should be provided as the eeprom write requires time
Intended to be used with SchoolTag remote station arduino source code from
https://bitbucket.org/school-tag/school-tag-remote-station-arduino/src/master/
Author: Vikas Singh <vikas3091999@gmail.com>
https://github.com/Singh-Vikas-M/StationFlags-Library-SchoolTag
Date: 12 Oct 2019
Website:https://schooltag.org
*/

#include <StationFlags.h>
byte flag;
void setup()
{
    Serial.begin(115200);
}
void loop()
{
    Serial.println("Program started.....");
    delay(1000);

    Serial.print("Flag Byte is: ");
    void printFlagByte();
    delay(1000);

    Serial.print("clearing the flag byte ");
    void clearFlagByte();
    delay(1000);

    Serial.print("setting RTC communication error; flag ");
    void setRTCComErrorFlag();
    delay(1000);

    Serial.print("setting RTC power lost flag ");
    void setRTCPowerLostFlag();
    delay(1000);

    Serial.print("setting Low battery power flag");
    void setLowBatteryFlag();s
    delay(1000);

    Serial.print("The final flag byte is: ");
    void printFlagByte();
    delay(1000);
}
