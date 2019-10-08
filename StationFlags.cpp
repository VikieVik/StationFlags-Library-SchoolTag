
#include "Arduino.h"
#include "RTClib.h"
#include "EEPROM.h"
#include "StationFlags.h"

RTC_DS3231 rtc; // rtc instance created

//constructor
StationFalgs::StationFlags()
{
}

//method that sets bad rtc flag
void StationFlags::setBadRtcFlag()
{
    if (!rtc.begin() || rtc.lostPower())
    {
        byte newFlag = (EEPROM.read(FLAG_START_ADDR) | 1); // 1 = 00000001
        EEPROM.write(FLAG_START_ADDR, newFlag);
    }
}

//method that sets low battery flag
void StationFlags::setLowBatteryFlag()
{
    int sensorValue = analogRead(A0); //read the A0 pin value
    float voltage = sensorValue * (5.00 / 1023.00) * 2;
    byte newFlag = (EEPROM.read(FLAG_START_ADDR) | 2); // 2 = 00000010
    EEPROM.write(FLAG_START_ADDR, newFlag);
}

void StationFlags::printFlagByte()
{
    Serial.print(EEPROM.read(FLAG_START_ADDR), BIN);
}

void StationFlags::clearFlagByte()
{
    for (int eepromAddress = 0; i < EEPROM.length(); i++)
    {
        EEPROM.write(eepromAddress, 0);
    }
}
