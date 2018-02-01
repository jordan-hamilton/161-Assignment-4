#include <iostream>
int hailstone(int);
using namespace std;

int main() {
  int integer;
  cout << "Gimme an integer! Now!" << endl;
  cin >> integer;
  cout << "That took " << hailstone(integer) << " steps." << endl;
  return 0;
}
