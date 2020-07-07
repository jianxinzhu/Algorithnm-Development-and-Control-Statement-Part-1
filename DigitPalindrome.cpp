/*  name: jianxin zhu
    date: july/06/2020
 */
 
 #include<iostream>

using namespace std;

int main()
{
	int number = 0;
	int reverseNumber = 0;
	cout << "Enter a number: ";
	cin >> number;

	while (number != 0)
	{
		int res = 0;
		res = number % 10;

		reverseNumber = reverseNumber *10 + res;
		number = number / 10;
	}

	cout << "The number is" << ((reverseNumber == number) ? " a palindrome. " : " not a palindrome") << endl;
}
