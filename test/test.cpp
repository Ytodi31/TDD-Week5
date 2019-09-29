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
 * @brief This test if the feedback is positive when the velocity to be achieved is more
 * than the current velocity
 */
TEST(PIDFeedbackTest, testPIDFeedbackValue) {
  PIDController controller;
  double feedback = controller.StepFeedback(5, 0);
  ASSERT_LT(0, feedback);
}

/**
 * @brief This test checks the getters of private members
 */
TEST(PIDGetterTest, testKpValue) {
  PIDController controller;
  double kp = controller.getKp();
  ASSERT_EQ(kp, 0.5);
  double kd = controller.getKd();
  ASSERT_EQ(kd, 0.2);
  double ki = controller.getKi();
  ASSERT_EQ(ki, 0.1);
}


