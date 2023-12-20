#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "TemperatureSensor.h"

#include "AdcMock.h"
#include "AdcStub.h"

using namespace ::testing;

// add setup and teardown

#if 0
TEST(TemperatureSensorTest, get_temperature_mocked) 
{
  //AdcMock mockAdc;
  //EXPECT_CALL(mockAdc, readAdcValue()).WillOnce(Return(20.0));
  //TemperatureSensor tSens(mockAdc);

  //EXPECT_EQ(43, tSens.getTemperature());
}

TEST(TemperatureSensorTest, get_temperature_stubbed) 
{
  //AdcStub stubAdc;
  //TemperatureSensor tSens(stubAdc);

  //EXPECT_EQ(13, tSens.getTemperature());
}

/////////////////////////////////////////////
// TDD example
TEST(TemperatureSensorTest, isInRange_positiveTemperature) 
{


}

TEST(TemperatureSensorTest, isInRange_negativeTemperature) 
{


}
#endif