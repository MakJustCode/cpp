#include <iostream>

using namespace std;

int main() {
  int number;
  cout << "Enter Positive numbers and enter 0 or less when you want to stop"
       << endl
       << endl;
  cout << "Enter number: ";
  cin >> number;

  do {
    cout << number << endl;
    cout << "Enter next number";
    cin >> number;
  }

  while (number > 0);

  return 0;
}