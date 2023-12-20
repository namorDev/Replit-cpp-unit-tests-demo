#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "Calculator.h"

using namespace ::testing;

// TODO: Add setup and teardown


TEST_F(CalculatorTest, add_positive_numbers) 
{
  // Given
  Calculator calculator;
  // When
  int returnValue = calculator.add(1,2);
  // Then
  EXPECT_EQ(3, returnValue);
}


// TODO: Add more testcases
// TODO: Refactor to Data Driven Testing