#include <gtest/gtest.h>

#include "PIDController.h"

TEST(PIDControllerTest, testPIDControllerComputeMethod) {
  PIDController controller;
  double velocity;
  velocity = controller.ComputeVelocity(10, 15);
  ASSERT_NEAR(15, velocity, 1);
}


TEST (PIDTuningTest, testPIDParameters) {
  PIDController controller;
  ASSERT_EQ(0.5, controller.getKp());
  ASSERT_EQ(0.2, controller.getKd());
  ASSERT_EQ(0.1, controller.getKd());
}
