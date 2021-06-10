#include <iostream>

using namespace std;

string name;
double percentage,price,profit,shares;

int main()
{
	cout << "\n\n       STOCK MARKET PREDICTIONS        " << endl;
	
	cout << "\nEnter name of stock:  ";
	cin >> name;
	
	cout << "\nEnter price of stock: $";
	cin >> price;
	
	cout << "\nEnter Shares ";
	cin >> shares;
	
	cout << "\nEnter the uprise or low rise prediction PERCENTAGE of stock: ";
	cin >> percentage;
	
	
	cout << "\n\nProfit: $" << percentage/100*price << endl;
	
	
	
	
	
	
	
	
}
