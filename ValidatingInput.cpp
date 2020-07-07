/*  name: jianxin zhu
    date: july/06/2020
 */
 
 
 #include<iostream>
using namespace std;

int main()
{
	unsigned int passes = 0;
	unsigned int failures = 0;
	unsigned int count = 1;

	while (count <= 10)
	{
		cout << "Enter result(1 = pass, 2 = failures): ";
		int result;
		cin >> result;

		if (result == 1)
		{
			passes++;
			count++;
		}
		else if (result == 2)
		{
			failures++;
			count++;
		}
		else
		{
			cout << "Worng input" << endl;
		}
	}

	cout << "Passes: " << passes << "\nFailure: " << failures << endl;

	if (passes >= 8)
	{
		cout << "Bonus to instructor" << endl;
	}
}
