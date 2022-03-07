/*FileName: T2_18.cpp
*Author£º   Chong Wang
*E-mail :   1583754750@qq.com
*Date :     Mar 5th.2022
*College:   He Nan University
*Funtion:   Just print some number to screen
*/#include<iostream>
using namespace std;
int main()
{

	int a, b;
	cin >> a >> b;
	if (a > b)
		cout << a << " " << "is large";
	else if (b > a)
		cout << b << " " << "is large";
	else
		cout << "These numbers are equal";

	return 0;
}