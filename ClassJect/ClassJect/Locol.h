#ifndef Locol_h
#define Locol_h

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>


class Locol
{
	public: 

		/*arraySnacks[]{ "Snacks\n","- Hersheys ", "- Reeses", "- Kit-Kat", "- Peeps", "- Lays", "- Ruffles", "- Doritos", "- Pop Corn", "- Skittles", "- M&M's", "- Cheetos", "- Crunch" };*/

		std::string name; 
		void setName(); 
		void setEmail();
		void setPassword(); 
		

		std::string getName() const; 
		std::string getEmail() const;
		std::string getPassword() const;

		/*std::string setUserName;
		std::string setUserEmail;
		std::string setUserPassword;*/
		

	private: 
		std::string email;
		std::string passWord;
		std::string gender;
		std::string	month;
		std::string occupation;
		
		int day;
		int year;
	    int incomeRange;





};
#endif