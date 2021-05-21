// Created By : Makenson Noel
// Edited By : Makenson Noel 
// December 21, 2019 

// This app was created in order to help those shopping and figuring out percentages 
// This app takes the price and discount percentage of the item then outputs the results 

#include <iostream>

double price, discount, newDiscount, newPrice, tax, yourTax; 

int main()
{
	
	std::cout << "Price $"; // Price of item 
	std::cin >> price;

	std::cout << "Discount : "; // Discount amount
	std::cin >> discount;

	std::cout << "Tax : "; //Tax percentaage for state
	std::cin >> tax; 
	yourTax = (tax / 100); 

	
	if (discount > 0 && discount < 100) // if the input is more then 0 and less then 100, then codition will excute
	{
		newDiscount = (discount / 100); // Math for discounted price 

		newPrice = price - (price * newDiscount) + yourTax; // Users discounted price

		std::cout << "Discounted price $" << newPrice << std::endl; // Output for the discounted price
	}

	else // Invalid message when the condition isn't met 
	{
		std::cout << "Please enter a valid discount 1% to 99%"; 
	}

	return 0; 
}