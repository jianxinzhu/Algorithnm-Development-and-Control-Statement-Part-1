/*   name:  jianxin zhu
     date: july/05/2020
*/

#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
	int kilometerDriven = 0;
	int literUse = 0;
	int totalLiterUse = 0;
	int totalKilometerDriven = 0;

	cout << "Enter Kilometer driven(-1 to quit): ";
	cin >> kilometerDriven;

	while (kilometerDriven != -1)
	{
		double literPerKms = 0;
		double totalPerKms = 0;
		cout << "Enter liters use: ";
		cin >> literUse;

		cout << setprecision(2) << fixed;
		literPerKms = static_cast<double>(kilometerDriven) / literUse;
		cout << "Kms per liter this trip: " << literPerKms << endl;
		totalKilometerDriven += kilometerDriven;
		totalLiterUse += literUse;

		totalPerKms = static_cast<double>(totalKilometerDriven) / totalLiterUse;


		cout << "Total kms per liter: " << totalPerKms << endl;

		cout << "Enter Kilometer driven(-1 to quit): ";
		cin >> kilometerDriven;
	}
	
}
