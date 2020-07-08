/*   name: jianxin zhu
     date: july/07/2020
 */
 #include<iostream>
using namespace std;

int main()
{
	double e = 1;
	double term = 1;
	int number = 0, flag =1;


	cout << "Enter the value for i: ";
	cin >> number;


	while (flag <= number)
	{
		term = term / flag;
		e = e + term;

		flag++;
	}

	cout << "The value of e is: " << e << endl;
}
