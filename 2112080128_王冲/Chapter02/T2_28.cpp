/*FileName:T2_28.cpp
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
	int a  ;
	cin >> a;
	int b = a % 10, c= a/10;
	int d = c % 10, e = c / 10;
	int f = e % 10, g = e / 10;
	int h = g % 10, i =  g/ 10;
	int j = i % 10, k = i / 10;
	cout << j << "   " << h << "   " << f << "   " << d << "   " << b << "   ";
	return 0;
}