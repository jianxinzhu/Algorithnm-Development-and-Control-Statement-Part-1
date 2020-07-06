/*   name: jianxin zhu
     date: july/05/2020
  */
  
  
  #include<iostream>
#include<iomanip>
using namespace std;


int main()
{
	int accountNumber = 0;

	cout << "Enter account numbe (or -1 to quit): ";
	cin >> accountNumber;

	while (accountNumber != -1)
	{
		double beginningBalance = 0.0;
		double totalCharge = 0.0;
		double totalCredit = 0.0;
		double creditLimit = 0.0;
		double newBalance = 0.0;

		cout << "Enter beginning balance: ";
		cin >> beginningBalance;
		cout << "Enter total charges: ";
		cin >> totalCharge;
		cout << "Enter total credit: ";
		cin >> totalCredit;
		cout << "Enter credit limit: ";
		cin >> creditLimit;

		newBalance = beginningBalance + totalCharge - totalCredit;

		
		if (newBalance >= creditLimit)
		{
			cout << "Account:      " << accountNumber
				<< "\nCredit Limit: " << creditLimit
				<< "\nBalance:      " << newBalance
				<< "\nCredit Limit Exceeded" << endl;
		}

		cout << "Enter account numbe (or -1 to quit): ";
		cin >> accountNumber;
	}
	
}
