/*  name: jianxin zhu
    datel: july/06/2020
*/

#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
	int lapHour = 0;
	double totalPay = 0.0;

	cout << "Enter laps completed(-1 to end): ";
	cin >> lapHour;

	while (lapHour != -1)
	{
		double payRate = 0.0;
		double thisPay = 0.0;
		cout << "Enter sponsorship rate: ";
		cin >> payRate;
		if (lapHour > 40)
		{
			int extraHour = lapHour - 40;
			thisPay = (40 * payRate) + (extraHour * payRate * 1.5);
		}
		else
		{
			thisPay = lapHour * payRate;
		}

		cout << setprecision(2) << fixed;
		cout << "Student contribution is: " <<thisPay << endl;

		totalPay += thisPay;

		cout << "Enter laps completed(-1 to end): ";
		cin >> lapHour;
	}

	cout << "Total funds raised: " << setprecision(2) << totalPay << endl;
}
