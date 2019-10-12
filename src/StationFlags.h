/*
  StatioFlag - Library for reading-writing flags and device vitals for SchoolTag stations
  Intended to be used with SchoolTag remote station arduino source code from
  https://bitbucket.org/school-tag/school-tag-remote-station-arduino/src/master/
  Created by Aaron Roller & Vikas Singh
  V 1.0  Oct 8, 2019.
  Released into the public domain.
  -----------------------------------------------------------------------
  Dependecy: Arduinos EEPROM.h library to access internal EEPROM storage of arduino
  1 Byte System flag Map

  ----------------------------
  |      8 Byte Flag       |
  ----------------------------
  | 0 |   RTC Com Error    |
  ----------------------------
  | 1 |   RTC Power Lost   |
  ----------------------------
  | 2 |   Low Battery      |
  ----------------------------
  | 3 |         -          |
  ----------------------------
  | 4 |         -          |
  ----------------------------
  | 5 |         -          |
  ----------------------------
  | 6 |         -          |
  ----------------------------
  | 7 |         -          |
  ----------------------------
 

*/

#ifndef StationFlags_h
#define StationFlags_h

#include "Arduino.h"
#include "EEPROM.h"

#define FLAG_START_ADDR 0 // 0 to 255
#define BAT_READ_PIN A0   // user defined analog pin

class StationFlags
{
public:
  StationFlags();
  void setRTCComErrorFlag();
  void setRTCPowerLostFlag();
  void setLowBatteryFlag();
  byte printFlagByte();
  void clearFlagByte();

private:
};

#endif
