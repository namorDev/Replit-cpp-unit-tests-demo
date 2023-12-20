#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "Calculator.h"

using namespace ::testing;

// add setup and teardown

class CalculatorTest : public testing::Test {
 protected:
  Calculator calculator;
  void SetUp() override {
    
  }
};


TEST_F(CalculatorTest, add_positive_numbers) 
{
  int returnValue = calculator.add(1,2);
  EXPECT_EQ(3, returnValue);
  
}

TEST_F(CalculatorTest, add_negative_numbers) 
{
  int returnValue = calculator.add(-1,2);
  EXPECT_EQ(1, returnValue);

}

TEST_F(CalculatorTest, when_add_negative_numbers_then_return_negative_number) 
{
  //When
  int returnValue = calculator.add(-1,-2);
  //Then
  EXPECT_EQ(-3, returnValue);

}

class CalculatorTestAuto :
    public testing::TestWithParam<std::tuple<int, int, int>> {
};

INSTANTIATE_TEST_SUITE_P(
  TestCalc, CalculatorTestAuto,
  testing::Values(
    std::make_tuple(5, 2, 3),
    std::make_tuple(1, -1, 2),
    std::make_tuple(-3, -1, -2)
     
  )
);

TEST_P(CalculatorTestAuto, AddNumbers) {
  //Given
  Calculator calculator;

  int param0 = std::get<0>(GetParam());
  int param1 = std::get<1>(GetParam());
  int param2 = std::get<2>(GetParam());
  //When
  int returnValue = calculator.add(param1, param2);
  //Then
  EXPECT_EQ(param0, returnValue);
}
