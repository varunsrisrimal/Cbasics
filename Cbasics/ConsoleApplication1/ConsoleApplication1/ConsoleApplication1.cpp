// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

struct Prime
{
	int number;
	bool isNotPrime = false;
};
int main()
{
	int max;
	std::cout << "Enter Max ";
	std::cin >> max;
	Prime* arr = new Prime[max];
	for (int i = 0; i < max; i++) //filling up the array
	{
		arr[i].number = i;
		std::cout << arr[i].number << " ";
	}

	
	for (int i = 2; i < max; i++)
	{
		if (arr[i].isNotPrime == false)
		{
			int j = i;
			while (true)
			{
				if (j*i < max)
				{
					arr[j*i].isNotPrime = true;
				}
				else
				{
					break;
				}
				j++;
			}
		}
	}
	
	for (int i= 0; i < max; i++)
	{
		if (!arr[i].isNotPrime)
			std::cout << arr[i].number << "\n";
	}

	system("pause");
	return 0;
}

