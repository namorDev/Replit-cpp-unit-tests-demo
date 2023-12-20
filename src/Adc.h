#pragma once

#include "IAdc.h"

class Adc : public IAdc
{
public:
Adc(){}
~Adc(){}

int readAdcValue() override;
};