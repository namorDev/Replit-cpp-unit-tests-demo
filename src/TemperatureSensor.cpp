#include "TemperatureSensor.h"

#include "IAdc.h"

TemperatureSensor::TemperatureSensor(IAdc& adc) :
m_adc(adc),
m_season(SEASON::eSUMMER)
{
  
}

int TemperatureSensor::getTemperature()
{
  int value = m_adc.readAdcValue();
  int temperature = value * 2 + 3;
  return temperature;
}

void TemperatureSensor::setSeason(SEASON s)
{
  m_season = s;
}

// Requirements:
// - Temperature is in range when between 10 and 20 degree and between 50 and 60 degree
// - Otherwise the temperature is not in range
// - If it is winter, the temperature is also in range between -5 and -10 degree
bool TemperatureSensor::isInRange(int temperature)
{
  // TODO: Implement with TDD
  return false;
}