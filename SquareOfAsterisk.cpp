/*   name: jianxin zhi
     date: july/06/2020
*/

#include<iostream>
using namespace std;

int main()
{
	int number = 0;
	char star = '*';
	char space = ' ';
	int counter = 1;

	cout << "Enter number:";
	cin >> number;

	if (number < 1)
	{
		number = 1;
	}
	else if (number > 20)
	{
		number = 20;
	}

	while (counter <= number)
	{

		if (counter == 1 || counter == number)
		{
			int index = 1;
			while (index <= number)
			{
				cout << star;
				index++;
			}
		}
		else
		{
			int index = 1;
			while (index <= number)
			{
				if (index == 1 || index == number)
				{
					cout << star;
					index++;
				}
				else
				{
					cout << space;
					index++;
				}
			}
		}



		counter++;
		cout << endl;

	}
}
