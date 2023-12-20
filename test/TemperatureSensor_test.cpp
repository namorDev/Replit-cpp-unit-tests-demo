#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "TemperatureSensor.h"

#include "AdcMock.h"
#include "AdcStub.h"

using namespace ::testing;

// add setup and teardown


TEST(TemperatureSensorTest, get_temperature_mocked) 
{
  AdcMock mockAdc;
  EXPECT_CALL(mockAdc, readAdcValue()).WillOnce(Return(20.0));
  TemperatureSensor tSens(mockAdc);

  EXPECT_EQ(43, tSens.getTemperature());
}

TEST(TemperatureSensorTest, get_temperature_mocked1) 
{
  AdcMock mockAdc;
  EXPECT_CALL(mockAdc, readAdcValue()).WillOnce(Return(-14));
  TemperatureSensor tSens(mockAdc);

  EXPECT_EQ(-25, tSens.getTemperature());
}

TEST(TemperatureSensorTest, get_negativetemperature_mocked) 
{
  AdcMock mockAdc;
  EXPECT_CALL(mockAdc, readAdcValue()).WillOnce(Return(-4.0));
  TemperatureSensor tSens(mockAdc);

  EXPECT_EQ(-5, tSens.getTemperature());
}

TEST(TemperatureSensorTest, get_temperature_stubbed) 
{
  AdcStub stubAdc;
  TemperatureSensor tSens(stubAdc);

  EXPECT_EQ(23, tSens.getTemperature());
}

/////////////////////////////////////////////
// TDD example
TEST(TemperatureSensorTest, isInRange_positiveTemperature) 
{
  

}

TEST(TemperatureSensorTest, isInRange_negativeTemperature) 
{


}

TEST(TemperatureSensorTest, given_temperature_is_10_when_is_in_range_then_return_true) 
{
  AdcStub stubAdc;
    //Given
    TemperatureSensor tSens(stubAdc);
    int input = 10;
    //When
    bool isInRange = tSens.isInRange(input);
    // Then
    EXPECT_EQ(true, isInRange);

}

TEST(TemperatureSensorTest, given_temperature_is_20_when_is_in_range_then_return_true) 
{
  AdcStub stubAdc;
    //Given
    TemperatureSensor tSens(stubAdc);
    int input = 20;
    //When
    bool isInRange = tSens.isInRange(input);
    // Then
    EXPECT_EQ(true, isInRange);

}

TEST(TemperatureSensorTest, given_temperature_is_21_when_is_in_range_then_return_false) 
{
  AdcStub stubAdc;
    //Given
    TemperatureSensor tSens(stubAdc);
    int input = 21;
    //When
    bool isInRange = tSens.isInRange(input);
    // Then
    EXPECT_EQ(false, isInRange);
  
}

TEST(TemperatureSensorTest, given_temperature_is_49_when_is_in_range_then_return_false)
{
  AdcStub stubAdc;
    //Given
    TemperatureSensor tSens(stubAdc);
    int input = 49;
    //When
    bool isInRange = tSens.isInRange(input);
    // Then
    EXPECT_EQ(false, isInRange);

}

TEST(TemperatureSensorTest, given_temperature_is_50_when_is_in_range_then_return_true) 
{
  AdcStub stubAdc;
    //Given
    TemperatureSensor tSens(stubAdc);
    int input = 50;
    //When
    bool isInRange = tSens.isInRange(input);
    // Then
    EXPECT_EQ(true, isInRange);

}

TEST(TemperatureSensorTest, given_temperature_is_60_when_is_in_range_then_return_true) 
{
  AdcStub stubAdc;
    //Given
    TemperatureSensor tSens(stubAdc);
    int input = 60;
    //When
    bool isInRange = tSens.isInRange(input);
    // Then
    EXPECT_EQ(true, isInRange);

}

TEST(TemperatureSensorTest, given_temperature_is_0_when_is_in_range_then_return_false) 
{
  AdcStub stubAdc;
    //Given
    TemperatureSensor tSens(stubAdc);
    int input = 0;
    //When
    bool isInRange = tSens.isInRange(input);
    // Then
    EXPECT_EQ(false, isInRange);

}

TEST(TemperatureSensorTest, given_temperature_is_9_when_is_in_range_then_return_false) 
{
  AdcStub stubAdc;
    //Given
    TemperatureSensor tSens(stubAdc);
    int input = 9;
    //When
    bool isInRange = tSens.isInRange(input);
    // Then
    EXPECT_EQ(false, isInRange);

}

TEST(TemperatureSensorTest, given_temperature_is_minus1_when_is_in_range_then_return_false) 
{
  AdcStub stubAdc;
    //Given
    TemperatureSensor tSens(stubAdc);
    int input = -1;
    //When
    bool isInRange = tSens.isInRange(input);
    // Then
    EXPECT_EQ(false, isInRange);

}



