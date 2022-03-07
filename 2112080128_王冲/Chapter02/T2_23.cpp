/*FileName:T2_23.cpp
*Author£º   Chong Wang
*E-mail :     1583754750@qq.com
*Date :        Mar 5th.2022
*College:    He Nan University
*Funtion:    Just print something to screen
*/
#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	if (a > b and a > c and a > d and a > e)
		cout << a;
	 else if (b > a and  b> c and  b> d and b > e)
		cout << b;
	else if (c > b and c > a and  c> d and c > e)
		cout << c;
	else if (d> b and  d> c and  d> a and d > e)
		cout << d;
	else if (e > b and e > c and e > d and e > a)
		cout << e;
	if (a < b and a < c and a < e and a < d)
		cout << " "<<a;
	else if ( b< a and  b< c and  b< e and  b< d)
		cout << " " << b;
	else if ( c< b and  c< a and  c< e and c < d)
		cout << " " << c;
	else if ( d< b and  d< c and d < e and  d< a)
		cout << " " << d;
	else if (e < b and  e< c and  e< a and e < d)
		cout << " " << e;
	return 0;
}