/*********************************************************************
 ** Author: Jordan Hamilton
 ** Date: 01/31/2018
 ** Description: This function takes a double representing seconds
 ** as an argument, then calculates and returns the distance an object
 ** has fallen in the number of seconds specified.
 *********************************************************************/

#include <cmath>

double fallDistance(double seconds) {

  // Create a named constant for gravitational acceleration
  double const ACCELERATION = 9.8;

  // Return the distance traveled in meters
  return 0.5 * ACCELERATION * pow(seconds, 2.0);
}
