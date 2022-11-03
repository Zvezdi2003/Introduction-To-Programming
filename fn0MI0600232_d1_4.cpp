/**
*
* Solution to homework assignment 1
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2022/2023
*
* @author Zvezdelin Penkov
* @idnumber 0MI0600232
* @task 4
*
*/

#include <iostream>
using namespace std;

bool isPrime(long long number)
{
	bool is_prime = true;

	// 0 and 1 are not prime numbers
	if (number == 0 || number == 1) {
		is_prime = false;
	}

	// loop to check if n is prime
	for (int i = 2; i <= number / 2; ++i) {
		if (number % i == 0) {
			is_prime = false;
			break;
		}
	}
	return is_prime;
}
bool isRemarkable(long long number)
{
	int digit;
	int digit2;
	long long temp;
	bool flag = false;

	while (number != 0)
	{
		digit = number % 10;
		number /= 10;
		temp = number;
		while (temp != 0)
		{
			digit2 = temp % 10;
			if (digit == digit2)
			{
				flag = true;
				break;
			}

			temp /= 10;
		}

		if (flag == true)
			break;
	}

	return flag;
}
int main()
{
	long long number;


	cout << "Enter a positive integer: ";
	cin >> number;

	if (number < 1 || number > 1000000000)
	{
		cout << "Invalid input!" << "\n";
	}

	isPrime(number);
	isRemarkable(number);
	int temp1 = number;
	int temp2 = number;

	while (!isPrime(temp1) || isRemarkable(temp1))
	{
		temp1++;
	}
	while (!isPrime(temp2) || isRemarkable(temp2))
	{
		temp2--;
	}
	if (temp1 - number < number - temp2)
	{
		cout << temp1;
	}
	else
	{
		cout << temp2;
	}
}






