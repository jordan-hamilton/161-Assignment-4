/*********************************************************************
 ** Author: Jordan Hamilton
 ** Date: 01/30/2018
 ** Description: This function takes three integers by reference,
 ** then compares their values sequentially to ensure they're sorted
 ** from lowest to highest.
 *********************************************************************/

void smallSort(int &a, int &b, int &c) {

  // Define a variable that will temporarily store an integer.
  // This variable will only be used in this function if we need
  // to swap an integer with a smaller integer after comparison.
  int temporaryInteger;

  // Ensure that the first variable is less than the second variable.
  // If the first variable is greater, assign its value to our
  // temporary variable, assign the lesser value to the first variable,
  // then assign the value of the temporary variable to the second variable.
  if (a > b) {
    temporaryInteger = a;
    a = b;
    b = temporaryInteger;
  }

  // Repeat the process above, comparing the first variable with the
  // third variable.
  if (a > c) {
    temporaryInteger = a;
    a = c;
    c = temporaryInteger;
  }

  // Finally, compare the second variable and the third variable,
  // sorting these elements if necessary.
  if (b > c) {
    temporaryInteger = b;
    b = c;
    c = temporaryInteger;
  }

  // Since we only have 3! permutations of 3 elements, (2^(3-1))-1 comparisons
  // sort the elements.
}
