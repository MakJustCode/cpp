/*
	Age calculator
	Created By: Makenson Noel
	Copyright Makenson Noel
*/

#ifndef Age_h
#define Age_h
#include <iostream> 
#include <string>
#include <cmath>

//Class with all of the variables 
class YourAge
{
	public:
		int getYear() const; 
		void setYear(); 
		int currentYear;
		int birthYear;
		void title(); 
	private: 
		int age; 
};

#endif