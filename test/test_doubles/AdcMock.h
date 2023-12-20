#pragma once

#include <gmock/gmock.h>

#include "IAdc.h"

class AdcMock : public IAdc 
{
public:
MOCK_METHOD(int, readAdcValue, (), (override));
};