/**
 * @copyright Copyright (c) Fall 2019 ENPM808X
 *            This project is released under the MIT License
 *
 * @file PIDController.h
 * @brief PIDController class header file
 *
 * It contains the function definition to compute the new velocity of PID
 *
 * @author Yashaarth Todi [Driver]
 * @author Raja Iskala [Navigator]
 *
 * @date 09-25-2019
 */

#ifndef INCLUDE_PIDCONTROLLER_H_
#define INCLUDE_PIDCONTROLLER_H_

class PIDController {
 public:
  PIDController();
  ~PIDController();

  /**
   * @brief ComputeVelocity, computes new velocity given a target setpoint and
   * current velocity
   * @param targetSetpoint, variable of type double holding target velocity
   * @param currentVelocity, variable of type double folding current velocity
   * @return double type, new velocity
   */
  double ComputeVelocity(double targetSetpoint, double currentVelocity);

  /**
   * @brief StepFeedback, computes the feedback velocity to be added to current
   * velocity
   * @param currentError of type double, is the current error of the velocity
   * @param previousError of type double, is the previous error of the velocity
   * @return double type, feedback
   */
  double StepFeedback(double currentError, double previousError);

  /**
   * @brief kp_ a variable of type double to store sum of errors
   * until target velocity is acheived
   */
  double sumError;

  /**
   * @brief Getter for private member kp - Proportional gain
   * @param none
   * @return type double, containing proportional gain
   */
  double getKp();

  /**
   * @brief Getter for private member kd - Differential gain
   * @param none
   * @return type double, containing differential gain
   */
  double getKd();

  /**
   * @brief Getter for private member ki - Integral gain
   * @param none
   * @return type double, containing integral gain
   */
  double getKi();

 private:
  /**
   * @brief kp_ a variable of type double to store Proportional gain
   */
  double kp_ = 0.5;

  /**
   * @brief ki_ a variable of type double to store Integral gain
   */
  double ki_ = 0.1;

  /**
   * @brief kd_ a variable of type double to store Differential gain
   */
  double kd_ = 0.2;
};

#endif /* INCLUDE_PIDCONTROLLER_H_ */
