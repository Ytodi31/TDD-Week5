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

PIDController::PIDController() {
  // TODO Auto-generated constructor stub

}

PIDController::~PIDController() {
  // TODO Auto-generated destructor stub
}

/**
 * @brief ComputeVelocity function computes the new velocity for a PID
 * Controller.
 * @param setPoint of type double,
 * @param actualVelocity of type double,
 * @return auto type, new velocity
 */
double PIDController::ComputeVelocity(double setPoint, double actualVelocity) {

  //stub implementation
  return 100;
}

/**
 * @brief Sets value of private member proportional gain
 * @param type double, value of proportional gain
 * @return none
 */
void PIDController::setKp(double kp) {
  PIDController::kp_ = kp;
}

/**
 * @brief Sets value of private member differential gain
 * @param type double, value of differential gain
 * @return none
 */
void PIDController::setKd(double kd) {
  PIDController::kd_ = kd;
}

/**
 * @brief Sets value of private member integral gain
 * @param type double, value of integral gain
 * @return none
 */
void PIDController::setKi(double ki) {
  PIDController::ki_ = ki;
}

