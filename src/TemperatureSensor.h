#pragma once

#include "IAdc.h"

enum SEASON {
eSPRING,
eFALL,
eSUMMER,
eWINTER
};

class TemperatureSensor
{
  IAdc& m_adc;
  SEASON m_season;
public:
  TemperatureSensor(IAdc& adc);
  ~TemperatureSensor() {}

  int getTemperature();
  void setSeason(SEASON s);
  bool isInRange(int temperature);
};