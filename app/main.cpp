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

/*
* @brief Main function implementation
*/
int main() {
PIDController p;
std::cout << "Check implementation of the ComputeVelocity(5,10) method:"
          << p.ComputeVelocity(5, 10) << std::endl;
std::cout << "Check implementation of the getKp() method should return 0.5: "
          << p.getKp() << std::endl;
std::cout << "Check implementation of the getKi() method should return 0.1: "
          << p.getKi() << std::endl;
std::cout << "Check implementation of the getKd) method should return 0.2: "
          << p.getKd() << std::endl;
return 0;
}
