/**
 * @copyright Copyright (c) Fall 2019 ENPM808X
 *            This project is released under the MIT License
 *
 * @file test.cpp
 * @brief PIDController class implementation file
 *
 * It contains the function definition to compute the new velocity of PID
 *
 * @author Yashaarth Todi [Driver]
 * @author Raja Iskala [Navigator]
 *
 * @date 09-25-2019
 */

#include <gtest/gtest.h>

#include "PIDController.h"


/**
 * @brief This test checks if controller has achieved set target
 */
TEST(PIDControllerTest, testPIDControllerComputeMethod) {
  PIDController controller;
  double velocity;
  velocity = controller.ComputeVelocity(10, 15);
  ASSERT_NEAR(15, velocity, 1);
}

/**
 * @brief This test checks if PID Controller parameters are appropriate
 */
TEST (PIDTuningTest, testPIDParameters) {
  PIDController controller;
  ASSERT_EQ(0.5, controller.getKp());
  ASSERT_EQ(0.2, controller.getKd());
  ASSERT_EQ(0.1, controller.getKi());
}
