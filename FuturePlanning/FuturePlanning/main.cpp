#include <iostream>

int year; 
std::string month; 
const int JANUARY = 1;
const int FEBRUARY = 2;
const int MARCH = 3; 
const int APRIL = 4; 
const int MAY = 5;
const int JUNE = 6;
const int JULY = 7; 
const int AUGUST = 8;
const int SEPTEMBER = 9;
const int OCTOBER = 10;
const int NOVEMBER = 11;
const int DECEMBER = 12;

void numberOfMonths()
{
	std::cout << "1) JANUARY" << std::endl;
	std::cout << "2) FEBRUARY" << std::endl;
	std::cout << "3) MARCH" << std::endl;
	std::cout << "4) APRIL" << std::endl;
	std::cout << "5) MAY" << std::endl;
	std::cout << "6) JUNE" << std::endl;
	std::cout << "7) JULY" << std::endl;
	std::cout << "8) AUGUST" << std::endl;
	std::cout << "9) SEPTEMBER" << std::endl;
	std::cout << "10) OCTOBER" << std::endl;
	std::cout << "11) NOVEMBER" << std::endl;
	std::cout << "12) DECEMBER" << std::endl;
}

void December2019()
{


}

int main()
{
	std::cout << "Enter Year: "; 
	std::cin >> year; 

	numberOfMonths();

	std::cout << "Enter Month-(1-12): "; 
	std::cin >> month; 

	



	return 0; 
}