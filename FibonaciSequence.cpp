/*  name: jianxin zhu
    date: july/07/2020
*/

#include<iostream>
using namespace std;

const int MAX_NUMBER = 10000;

int main()
{
	int firstNumber = 0;
	int secondNumber = 1;
	int res = 0;

	cout << firstNumber << " " << secondNumber << " ";
	while (res <= MAX_NUMBER)
	{
		res = firstNumber + secondNumber;
		cout << res << " ";

		firstNumber = secondNumber;
		secondNumber = res;


	}
}
