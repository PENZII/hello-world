/*FileName:T2_19.cpp
*Author£º   Chong Wang
*E-mail :     1583754750@qq.com
*Date :        Mar 5th.2022
*College:    He Nan University
*Funtion:    Just print some number to screen
*/
#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << "Input three different integers:" << a << " " << b << " " << c << endl;
	cout << "Sum is " << a + b + c << endl;
	cout << "Average is " << (a + b + c) / 3 << endl;
	cout << "Product is " << a * b * c << endl;

	if (a > b and b > c)
		cout << "Smallest is " << c << endl;
	cout << "Largest is  " << a << endl;
	if (c > b and b > a)
		cout << "Smallest is " << a << endl;
	cout << "Largest is  " << c << endl;
	 if (b > a and a > c)
		cout << "Smallest is " << c << endl;
	cout << "Largest is  " << b << endl;
	 if (a > c and c > b)
		cout << "Smallest is " << b << endl;
	cout << "Largest is  " << a << endl;
	 if (c > a and a > b)
		cout << "Smallest is " << b << endl;
	cout << "Largest is  " << c << endl;
	 if (b > c and c > a)
		cout << "Smallest is " << a << endl;
	cout << "Largest is  " << b << endl;



	return 0;
}