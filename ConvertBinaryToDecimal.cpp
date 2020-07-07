/*  name: jianxin zhu
    date: july/06/2020
 */
 
 
 #inlcude<iostream>
 using namespace std;
 
 int main()
{
	int number = 0;
	int decimalNumber = 0;
	int binaryPosition = 1;

	cout << "Enter a binary number: ";
	cin >> number;

	while (number != 0)
	{
		int res = 0;
		res = number % 10;

		decimalNumber = decimalNumber + res * binaryPosition;
		number /= 10;
		binaryPosition *= 2;
	}

	cout << decimalNumber << endl;
}
