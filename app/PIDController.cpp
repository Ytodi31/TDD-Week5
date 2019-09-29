/**
 * @copyright Copyright (c) Fall 2019 ENPM808X
 *            This project is released under the MIT License
 *
 * @file PIDController.cpp
 * @brief PIDController class implementation file
 *
 * It contains the function definition to compute the new velocity of PID
 *
 * @author Yashaarth Todi [Driver]
 * @author Raja Iskala [Navigator]
 *
 * @date 09-25-2019
 */

#include <PIDController.h>

#include <stdlib.h>

PIDController::PIDController() {
  sumError = 0;
}

PIDController::~PIDController() {
}

/**
 * @brief ComputeVelocity function computes the new velocity for a PID
 * Controller until target reached
 * @param setPoint of type double,
 * @param actualVelocity of type double,
 * @return auto type, new velocity
 */
double PIDController::ComputeVelocity(double setPoint, double actualVelocity) {
  // stub implementation
  return 100;
}

/**
 * @brief StepFeedback function computes the feedback needed to add to the
 * current velocity to gradually achieve the target velocity
 * @param currentError of type double, is the difference between current
 * velocity and target velocity
 * @param previousError of type double, is the error from the previous feedback
 * @return feedback of double type, which is the velocity to be added to current
 * velocity
 */
double PIDController::StepFeedback(double currentError, double previousError) {
  // stub implementation
  return -1;
}

/**
 * @brief Getter for private member kp
 * @param none
 * @return type double, value of proportional gain
 */
double PIDController::getKp() {
  // stub implementation
  return 1;
}

/**
 * @brief Getter for private member kd
 * @param none
 * @return type double, value of differential gain
 */
double PIDController::getKd() {
  // stub implementation
  return 1;
}

/**
 * @brief Getter for private member ki
 * @param none
 * @return type double, value of integral gain
 */
double PIDController::getKi() {
  // stub implementation
  return 1;
}

