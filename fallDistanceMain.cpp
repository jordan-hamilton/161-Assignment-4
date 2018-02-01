#include <iostream>

using namespace std;
double fallDistance(double seconds);

int main() {
  double segundos, distance;
  cout << "Input a time in seconds: ";
  cin >> segundos;
  cout << endl << fallDistance(segundos) << endl;

  return 0;
}
