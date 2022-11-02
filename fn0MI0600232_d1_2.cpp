/**
*
* Solution to homework assignment 1
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2022/2023
*
* @author Zvezdelin Penkov
* @idnumber 0MI0600232
* @task 2
*
*/
#include <iostream>
using namespace std;

int main()
{

	int number;
	int piece;
	cin >> number;
	if (number < 1 || number > 2000)
	{
		cout << "Incorrect input" << "\n";
		return 0;
	}
	else
	{

		if (number >= 1000)
		{
			piece = number / 1000;

			for (int i = 0; i < piece; i++)
			{
				cout << "M";
			}
			number %= 1000;
		}
		if (number >= 100)
		{
			piece = number / 100;
			if (piece == 9)
			{
				cout << "CM";
			}
			else if (piece >= 5)
			{
				cout << "D";
				for (int i = 0; i < piece - 5; i++)
				{
					cout << "C";
				}
			}
			else if (piece == 4)
			{
				cout << "CD";
			}
			else if (piece >= 1)
			{
				for (int i = 0; i < piece; i++)
				{
					cout << "C";
				}
			}
			number %= 100;

		}
		if (number >= 10)
		{
			piece = number / 10;

			if (piece == 9)
			{
				cout << "XC";
			}
			else if (piece >= 5)
			{
				cout << "L";

				for (int i = 0; i < piece - 5; i++)
				{
					cout << "X";
				}
			}
			else if (piece == 4)
			{
				cout << "XL";
			}
			else if (piece >= 1)
			{
				for (int i = 0; i < piece; i++)
				{
					cout << "X";
				}
			}
			number %= 10;

		}

		if (number >= 1)
		{
			piece = number;

			if (piece == 9)
			{
				cout << "IX";
			}
			else if (piece >= 5)
			{
				cout << "V";

				for (int i = 0; i < piece - 5; i++)
				{
					cout << "I";
				}
			}
			else if (piece == 4)
			{
				cout << "IV";
			}
			else if (piece >= 1)
			{
				for (int i = 0; i < piece; i++)
				{
					cout << "I";
				}
			}

		}
		
	}
}





