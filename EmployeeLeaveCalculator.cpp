/*  name:  jianxin zhu
    date: july/05/2020
*/

#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
	double workHour = 0.0;
	cout << "Enter number of hours worked (-1 to end): ";
	cin >> workHour;

	while (workHour != -1)
	{
		double accruedLeave = 0.0;
		accruedLeave = workHour * 0.1 + 2;

		cout << "Accrued leave: " << accruedLeave << " Hours" << endl;

		cout << setprecision(2) << fixed;

		cout << "Enter number of hours worked (-1 to end): ";
		cin >> workHour;
	}
}
