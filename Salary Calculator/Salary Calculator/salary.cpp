#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	double salary,hours=8,months=12,weeks=4,hourlyRate,days=5;
	
	std::cout << "-----S A L A R Y-----" << std::endl;
	
	std::cout << "Enter Yearly Salary : "; 
	std::cin >> salary;
	
	hourlyRate=salary/months/weeks/days/hours;
	
	cout << "Months: " << months << endl;
	cout << "Weeks: " << weeks << endl;
	cout << "Days: " << days << endl;
	cout << "Hours: " << hours << endl;
	
	cout << "Hourly Rate :" << hourlyRate << endl;
	
}
