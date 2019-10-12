/*
  StatioFlag - Library for reading-writing flags and device vitals for SchoolTag stations
  Created by Vikas Singh
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
#endif

#include "Arduino.h"
#include "EEPROM.h"

#define FLAG_START_ADDR 0 // 0 to 255

class StationFlags
{
public:
  StationFlags();
  void setRTCComErrorFlag();
  void setRTCPowerLostFlag();
  void setLowBatteryFlag();
  void printFlagByte();
  void clearFlagByte();

private:
};
