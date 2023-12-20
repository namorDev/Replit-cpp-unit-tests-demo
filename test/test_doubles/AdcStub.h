#pragma once

#include "IAdc.h"

class AdcStub : public IAdc
{
public: 
AdcStub(){}
~AdcStub(){}

int readAdcValue() override { return 10; };
};