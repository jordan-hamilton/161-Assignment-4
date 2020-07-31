/*********************************************************************
 ** Author: Jordan Hamilton
 ** Date: 01/31/2018
 ** Description: This function takes a double representing seconds
 ** as an argument, then calculates and returns the distance an object
 ** has fallen in the number of seconds specified.
 *********************************************************************/

#include <cmath>
#include <iostream>

using namespace std;
double fallDistance(double seconds);

int main() {
  double seconds;
  cout << "Input a time in seconds an object has fallen: ";
  cin >> seconds;
  cout << "That object fell " << fallDistance(seconds) << "m in " << seconds << " seconds." << endl;

  return 0;
}

double fallDistance(double seconds) {

  // Create a named constant for gravitational acceleration
  double const ACCELERATION = 9.8;

  // Return the distance traveled in meters
  return 0.5 * ACCELERATION * pow(seconds, 2.0);
}
