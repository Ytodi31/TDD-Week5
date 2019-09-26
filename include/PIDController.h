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
    * @brief Setter for private member kp - Proportional gain
    * @param type double holding value of kp
    * @return none
    */
  void setKp(double);

  /**
    * @brief Setter for private member kd - Differential gain
    * @param type double holding value of kd
    * @return none
    */
  void setKd(double);

  /**
    * @brief Setter for private member ki - Integral gain
    * @param type double holding value of ki
    * @return none
    */
  void setKi(double);

 private:
  /**
   * @brief kp_ a variable of type double to store Proportional gain
   */
  double kp_;

  /**
   * @brief ki_ a variable of type double to store Integral gain
   */
  double ki_;

  /**
   * @brief kd_ a variable of type double to store Differential gain
   */
  double kd_;
};

#endif /* INCLUDE_PIDCONTROLLER_H_ */
