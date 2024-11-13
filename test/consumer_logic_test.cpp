#include "consumer_logic.h"

#include <gtest/gtest.h>


class ConsumerLogicTest: public ::testing::Test {
 protected:
  ConsumerLogicTest() {
    // Setup
  }

  virtual ~ConsumerLogicTest() {
    // Teardown
  }

  int expectedExternalNumber = 100;
};

TEST_F(ConsumerLogicTest, SmokeTest) {
  int expected = 110;
  int actual = CalculateOurNumber(10);
  ASSERT_EQ(expected, actual);
}
