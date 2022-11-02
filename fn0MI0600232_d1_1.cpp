/**
*
* Solution to homework assignment 1
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2022/2023
*
* @author Zvezdelin Penkov
* @idnumber 0MI0600232
* @task 1
*
*/



#include <iostream>



int main()
{
	int number;
	std::cout << "Enter a number: ";
	std::cin >> number;


	if (number < 1 || number > 1000000)
	{
		std::cout << "Incorrect input" << "\n";
		return 0;
	}

	while (number != 0)
	{
		int digit = number % 10;
		number /= 10;
		int digitPow2 = digit * digit;
		while (digitPow2 != 0)
		{
			int remainder = digitPow2 % 10;
			digitPow2 /= 10;
			if (number == 0 && digitPow2 == 0)
			{
				remainder++;
			}
			std::cout << remainder;
		}
	}

}



