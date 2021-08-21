//this programme is print greater number among array number   

#include<iostream>

using namespace std;

int main()

{

	// size of array  is 5 
	const int SIZE = 5;

	int number[SIZE] = { 3,67, 87, 45,34 };

	int greatest = number[0];


	//using for loop for getting greater number 

	for (int count = 1; count < SIZE; count++)

	{

		if (number[count] >= greatest)

		{

			greatest = number[count];


		}
		 
	}

	cout << "greatest number is " << greatest << endl;


	return 0;
}
