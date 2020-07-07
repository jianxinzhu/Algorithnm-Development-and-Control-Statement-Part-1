/*  name: jianxin zhu
    date: july/06/2020
 */
 
 #include<iostream>
using namespace std;

int main()
{
	int flag = 1;

	cout << "N\t" << "5*N\t" << "10*N\t" << "15*N\t" << endl;

	while (flag <= 12)
	{
		cout << flag << '\t' << flag * 5 << '\t' << flag * 10 << '\t' 
			<< flag * 15 << '\t' << endl;
		flag++;
	}
}
