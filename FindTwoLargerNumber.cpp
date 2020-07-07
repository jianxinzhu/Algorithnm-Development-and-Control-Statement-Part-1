/*   name: jianxin zhu
     date: july/06/2020
*/


#include<iostream>
using namespace std;

int main()
{
	int flag = 1;
	int number = 0;
	int largetNumber = 0, secondLargeNumber = 0;


	while (flag < 10)
	{
		cout << "Enter 10 number, find Two largest number: ";
		cin >> number;
	

		if (number> largetNumber)
		{
			secondLargeNumber = largetNumber;
			largetNumber = number;
		}
		else if (number < largetNumber && number > secondLargeNumber)
		{
			secondLargeNumber = number;
		}


	

		flag++;

	}

	cout << "The largest number: " << largetNumber << "\nthe second largest number: "
		<< secondLargeNumber << endl;
}


