#include <iostream>


double salary;
std::string budgetChoice; 

void Invalid()
{
	std::cout << "Invalid"; 
}

void choices()
{
	std::cout << "\n";
	std::cout << "a) 50/30/20" << std::endl; 
	std::cout << "b) Not Coded Yet" << std::endl;
}

void notCoded()
{
	std::cout << "Yo chill lmfao its not coded yet XD"; 
}

void ftt()
{
	//Fifty twenty thrity (50/20/30)

	double fiftyPercent, twentyPercent, thirtyPercent; 

	fiftyPercent = salary * 0.50; 
	twentyPercent = salary * 0.20;
	thirtyPercent = salary * 0.30; 

	std::cout << std::endl; 

	std::cout << "50% : $" << fiftyPercent << std::endl;
	std::cout << "20% : $" << twentyPercent << std::endl;
	std::cout << "30% : $" << thirtyPercent << std::endl; 
}

int main()
{
	
	std::cout << "Salary: $"; 
	std::cin >> salary; 

	choices();  

	std::cout << "Budget Choice: "; 
	std::cin >> budgetChoice; 

	if (budgetChoice == "a" || budgetChoice == "A")
	{
		ftt();
	}

	else if (budgetChoice == "b" || budgetChoice == "B")
	{
		notCoded(); 
	}

	else
	{
		Invalid(); 
	}

	return 0; 
}