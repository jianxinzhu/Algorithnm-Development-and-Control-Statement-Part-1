/*  name: jianxin zhu
    date: july/07/2020
*/

#include<iostream>
using namespace std;

int main()
{
	int number = 1;

	while (number <= 8)
	{

		if (number % 2 == 0)
		{
			cout << " ";
		}


		int index = 1;
		while (index <= 8)
		{
		
			cout << "*" << " ";
			index++;	
		}

		number++;
		cout << endl;
	}
}
