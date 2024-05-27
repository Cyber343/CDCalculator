// Cert of Dep Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//This program calculates the amount of a CD up to two year term.

#include <iostream>
#include <cmath>

double deposit;
int term;
double apy;
double total;
bool conti;
int main()
{
	/*std::cout << "Enter in the amount deposited.\n";
	std::cin >> deposit;
	std::cout << "Enter in the APY rate.\n";
	std::cin >> apy;
	std::cout << "Enter in the term in months of the deposit.\n";
	std::cin >> term;
	if (term == 1)
	{
		total = deposit + ((deposit * apy) / 12);
		std::cout << "After " << term << " months, your total would be " << total;
	}
	if (term == 3)
	{
		total = deposit + ((deposit * apy) / 4);
		std::cout << "After " << term << " months, your total would be " << total;
	}if (term == 6)
	{
		total = deposit + ((deposit * apy) / 2);
		std::cout << "After " << term << " months, your total would be " << total;
	}if (term == 12)
	{
		total = deposit + (deposit * apy);
		std::cout << "After " << term << " months, your total would be " << total;
	}if (term == 24)
	{
		total = deposit + ((deposit * apy) / .5);
		std::cout << "After " << term << " months, your total would be " << total;
	}
	std::cout << "Would you like to continue?";
	std::cin >> conti;
	*/
	while (conti = true)
	{
		std::cout << "Enter in the amount deposited.\n";
		std::cin >> deposit;
		std::cout << "Enter in the APY rate.\n";
		std::cin >> apy;
		std::cout << "Enter in the term in months of the deposit.\n";
		std::cin >> term;
		if (term == 1)
		{
			total = deposit + ((deposit * apy) / 12);
			std::cout << "After " << term << " months, your total would be \n" << total;
		}
		else if (term == 3)
		{
			total = deposit + ((deposit * apy) / 4);
			std::cout << "After " << term << " months, your total would be \n" << total;
		}
		else if (term == 6)
		{
			total = deposit + ((deposit * apy) / 2);
			std::cout << "After " << term << " months, your total would be \n" << total;
		}
		else if (term == 12)
		{
			total = deposit + (deposit * apy);
			std::cout << "After " << term << " months, your total would be \n" << total;
		}
		else if (term == 24)
		{
			total = deposit + ((deposit * apy) / .5);
			std::cout << "After " << term << " months, your total would be \n" << total;
		}
		std::cout << "Would you like to continue? \n";
		std::cin >> conti;
	}
	
		{
			std::cout << "Goodbye";
		}
	
	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
