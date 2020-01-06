/*************************************************************************
 * *Author: Paul Leone
 * *Date: 1/30/2019
 * *Description: This program uses a function named hailstone that takes
 * * the starting integer as a parameter and returns how many steps it
 * * takes to reach 1.
 * **********************************************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int hailstone (int randomNum) 		//declare function prototype
{

	//Use if/else condition statements to define sequence
	//If first number = 1 then the process is done
	if (randomNum == 1)
		return 0;
	//If number is even, then divide by 2 to get next number
	else if (randomNum % 2 == 0)
		randomNum = randomNum / 2;
	//If number is not even or 1, then calculate for odd
	else
		randomNum = randomNum * 3 + 1;

	return 1 + hailstone(randomNum);
}
/*
int main()
{

	int number;
	cout << "Enter a positive number \n";
	cin >> number;

	//Call hailstone function
	int count = hailstone(number);
	cout << count << endl;

	return 0;
}
*/
