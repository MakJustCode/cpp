#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <random>

int main()
{

    int hour=8,day=5,week=52,month=12, pay;

    int salary;

    std::cout << "Y E A R L Y  S A L A R Y" << std::endl << std::endl;

    std::cout << "Hourly Wage: ";
    std:: cin >> pay;

    std::cout << "Hours worked: " << hour << std::endl;

    std::cout << "Days worked : " << day << std::endl;

    std::cout << "Weeks worked : " << week << std::endl;

    std::cout << "Months worked : " << month << std::endl;

    salary = (pay * hour * day  * week * month);

    std::cout << "Salary : $ " << salary;


    return 0;
}