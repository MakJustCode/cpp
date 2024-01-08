#include <iostream>
using namespace std;

int global = 100;

int First(int);

int main() {
  First(0);
  cout << "global: " << global << endl;
  int local1 = 200;
  cout << "Main local1: " << local1 << endl;
}

int First(int param) {
  int local1 = 0, global = 1000;
  cout << "local1: " << local1 << endl;
  return local1;
}