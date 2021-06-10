#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <cctype>

using namespace std;



int main()
{

	string name;
	string address;
	char response;

	time_t nowIsTheMoment;
	time(&nowIsTheMoment);
	cout << endl << endl;
	cout << "This Program was written by: Makenson Noel." << endl;
	cout << "and executed at: " << ctime(&nowIsTheMoment); // prints the system time
}