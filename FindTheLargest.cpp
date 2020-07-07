/*   name: jianxin zhu
     date: july/06/2020
 */
 
 #include<iostream>
using namespace std;

int main()
{
	int number = 0;
	int dummyData = 1;
	int largestNumber = 0;

	cout << "Enter 10 number and find largest number: ";
	cin >> number;

	while (dummyData < 10)
	{
		
		if (number > largestNumber)
		{
			largestNumber = number;
		}
		dummyData++;

		cout << "Enter next Number: ";
		cin >> number;

	}

	cout << "The largest number is: " << largestNumber << endl;
}
