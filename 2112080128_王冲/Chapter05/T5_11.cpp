/*FileName:T5_.cpp
*Author£º   Chong Wang
*E-mail :     1583754750@qq.com
*Date :        Aprial 2nd.2022
*College:    He Nan University
*Funtion:    Just print something to screen
*/
#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
int main()
{
    double amount;
    double rate = 0.05;
    double principal = 1000;
    cout << "Year" << setw(21) << "Amount on deposit" << setw(21) << "compound interest" << endl;
    for (; rate <= 0.1; rate = rate + 0.01)
    {
        for (unsigned int year = 1; year <= 10; year++)
        {
            amount = principal;
            cout << fixed << setprecision(2);
            amount = principal * pow(1.0 + rate, year);
            cout << setw(4) << year << setw(21) << amount << setw(21) << rate << endl;
        }
        cout << endl;
    }
    return 0;
}
