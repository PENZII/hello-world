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
    double sn;
    double rate = 0.05;
    double ch = 24;
    double year = 387;
    for (; rate <= 0.1; rate = rate + 0.01)
    {
        sn = ch;
        cout << fixed << setprecision(2);
        sn = ch * pow(1.0 + rate, year);
        cout << sn << endl;
    }
    return 0;
}
