/**
 * @copyright Copyright (c) Fall 2019 ENPM808X
 *            This project is released under the MIT License
 *
 * @file main.cpp
 * @brief Main file of PID Controller to calculate new velocity
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

#include <iostream>
#include "PIDController.h"

int main() {
PIDController p;
std::cout << "Check implementation of the ComputeVelocity(10,15) method:"
          << p.ComputeVelocity(10, 15) << std::endl;
std::cout << "Check implementation of the StepFeedback(5,0) method:"
          << p.StepFeedback(5, 0) << std::endl;
return 0;
}
