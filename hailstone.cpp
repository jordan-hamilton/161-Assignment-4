/*********************************************************************
 ** Author: Jordan Hamilton
 ** Date: 01/31/2018
 ** Description: This function takes an integer, then divides its
 ** value by 2 if the integer is even, or multiplies the integer by 3
 ** and adds 1 if the integer is odd. The result is stored in the
 ** parameter and the number of operations is incremented by 1.
 ** This process is repeated until the integer is equal to 1.
 *********************************************************************/

int hailstone(int value) {

  // Define and initalize our accumulator
  int steps = 0;

  // Create a while loop that loops until the pre-test condition
  // determines that the hailstone sequence has set our value to 1,
  // or does not loop at all if the function takes a value of 1.
  while (value != 1) {
    if (value % 2 == 0) {

      // If our value is currently even, divide it by 2.
      value /= 2;
    } else {

      // If our value is currently odd, multiply it by 3 and add 1.
      value = (value * 3) + 1;
    }

    // Increment the number of steps it takes for our value to equal 1.
    steps++;
  }

  // Return the number of steps our while loop took to set the initial
  // value equal to 1.
  return steps;
}
