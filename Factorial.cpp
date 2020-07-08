/*  name: jianxin zhu
    date: july/07/2020
 */

#include<iostream>
#include<iomanip>

using namespace std;


int main()
{
	int number = 0;
	unsigned int res = 1;
	cout << "Enter a nonnegative integer number:";
	cin >> number;
	int originalNumber = number;

	while (number>=0)
	{
		if (number == 1 || number == 0)
		{
			res = res * 1;
		}
		else
		{
		
			res = res * number;
		}

		number--;

	}

	cout << "Fatorial of '" << originalNumber << "' is: " << res << endl;
}
