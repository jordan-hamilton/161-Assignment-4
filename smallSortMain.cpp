#include <iostream>
void smallSort(int&, int&, int&);
using namespace std;
int main() {
  int low, middle, high;
  cout << "Enter three numbers:" << endl;
  cin >> low;
  cin >> middle;
  cin >> high;
  smallSort(low, middle, high);
  cout << "The correct order was: " << low << ", " << middle << ", " << high << "." << endl;
}
