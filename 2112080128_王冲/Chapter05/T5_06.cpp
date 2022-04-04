/*FileName:T5_.cpp
*Author£º   Chong Wang
*E-mail :     1583754750@qq.com
*Date :        Aprial 2nd.2022
*College:    He Nan University
*Funtion:    Just print something to screen
*/
#include <iostream>
using namespace std;
int main()
{
    double a = 0;
    double b = 0;
    double sum = 0, average = 0;
    while (b != 9999)
    {
        cin >> b;
        sum = sum + b;
        cin >> b;
        a++;
    }
    average = sum / a;
    cout << average << endl;
    return 0;
}
