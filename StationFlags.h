/*
  StatioFlag - Library for reading-writing flags and device vitals for SchoolTag stations
  Created by Aaron Roller & Vikas Singh
  V 1.0  Oct 8, 2019.
  Released into the public domain.
  -----------------------------------------------------------------------
  Dependecy: Arduinos RTClib.h  RTC library for clock DS3231

  1 Byte System flag Map

  ----------------------------
  |     8 Byte Flag        |
  ----------------------------
  | 0 | RTC Error          |
  ----------------------------
  | 1 | LOW BATTERY        |
  ----------------------------
  | 2 |         -          |
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
#include "RTClib.h"

#define FLAG_START_ADDR 0 // 0 to 255
#define BAT_READ_PIN A0   // user defined analog pin

class StationFlags
{
public:
  StationFlags();
  void setBadRtcFlag();
  void setLowBatteryFlag();
  void printFlagByte();
  void clearFlagByte();

private:
};

#endif
