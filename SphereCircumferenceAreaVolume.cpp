/*  name: jianxin zhu
    date: july/07/2020
*/

#include<iostream>
#include<iomanip>
#define Pi 3.14159

using namespace std;


int main()
{
	double radius = 0.0;
	double circumference, area, volume;
	cout << "Enter the radius, and calculating the circumference, area and volume:";
	cin >> radius;

	circumference = 2 * Pi * radius;
	area = Pi * radius * radius;
	volume = (4 / 3) * Pi * radius * radius * radius;

	cout << setprecision(2) << fixed;

	cout << "The circumference: " << circumference << "\nArea: " << area
		<< "\nVolume: " << volume << endl;


}
