#include <cmath>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
  time_t ctimes;
  time(&ctimes);
  cout << endl << endl;
  cout << "This Program was written by: Makenson Noel." << endl;
  cout << "and executed at: " << ctime(&ctimes); // prints the system time

  return 0;
}
