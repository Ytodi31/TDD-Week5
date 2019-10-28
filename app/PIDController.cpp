/**
 * @copyright Copyright (c) Fall 2019 ENPM808X
 *            This project is released under the MIT License
 *
 * @file PIDController.cpp
 * @brief PIDController class implementation file
 *
 * It contains the function definition to compute the new velocity of PID
 *
 * Part - 1
 * @author Yashaarth Todi [Driver]
 * @author Raja Iskala [Navigator]
 * 
 * Part -2 
 * @author Sandeep Kota Sai Pavan [Driver]
 * @author Raj Prakash Shinde [Navigator]
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
  double targetVelocity = actualVelocity;
  double currentError = setPoint - actualVelocity;
  double previousError = 0;
  while (abs(currentError) > 1) {
    sumError = sumError + currentError;
    // Calculate step feedback
    double feedback = StepFeedback(currentError, previousError); 
    actualVelocity = actualVelocity + feedback;
    previousError = currentError;
    currentError = targetVelocity - actualVelocity;
  }
  return actualVelocity;
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
  int dt = 1;
  double errorDifference = (currentError - previousError)/dt;
  // Calculate proportional integral defferential feedback 
  double feedback = kp_*currentError + kd_*errorDifference + ki_*sumError*dt;
  return feedback;
}

/**
 * @brief Getter for private member kp
 * @param none
 * @return type double, value of proportional gain
 */
double PIDController::getKp() {
  return kp_;
}

/**
 * @brief Getter for private member kd
 * @param none
 * @return type double, value of differential gain
 */
double PIDController::getKd() {
  return kd_;
}

/**
 * @brief Getter for private member ki
 * @param none
 * @return type double, value of integral gain
 */
double PIDController::getKi() {
  return ki_;
}

