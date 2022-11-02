/**
*
* Solution to homework assignment 1
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2022/2023
*
* @author Zvezdelin Penkov
* @idnumber 0MI0600232
* @task 3
*
*/
#include <iostream>
using namespace std;


int main()
{
	int number;
	cin >> number;
	if (number < 2 || number > 9)
	{
		cout << "Invalid input" << "\n";
		return 0;
	}

	for (int i = 0; i <= (25 - 2 * number) / 2; i++)
	{
		cout << "\n";
	}

	for (int i = 1; i <= number; i++)
	{
		for (int i = 0; i < (80 - 3 * number) / 2; i++)
		{
			cout << " ";
		}
		for (int j = 1; j <= i; j++)
			cout << j;
		for (int k = 0; k < number + 2 * (number - i); k++)
		{
			if (i == number)
			{
				cout << "-";

			}
			else
			{
				cout << " ";
			}
		}
		for (int j = i; j >= 1; j--)
			cout << j;
		cout << endl;

	}

	for (int i = number - 1; i >= 1; i--)
	{
		for (int i = 0; i < (80 - 3 * number) / 2; i++)
		{
			cout << " ";
		}
		for (int j = 1; j <= i; j++)
			cout << j;
		for (int k = 0; k < number + 2 * (number - i); k++)
		{
			cout << " ";
		}
		for (int j = i; j >= 1; j--)
			cout << j;
		for (int i = 0; i < (80 - 3 * number) / 2; i++)
		{
			cout << " ";
		}
		cout << endl;

	}
	for (int i = 0; i <= (25 - 2 * number) / 2; i++)
	{
		cout << "\n";
	}


}



