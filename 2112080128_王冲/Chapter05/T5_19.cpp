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
    double pi = 0;
    for (int i = 1; i <= 1000; i++)
    {
        cout << i << "\t";
        if (i % 2 == 0)
        {
            pi = pi - 4 / (2 * double(i) - 1);
            cout << pi << endl;
        }
        else {
            pi = pi + 4 / (2 * double(i) - 1);
            cout << pi << endl;
        }
    }
    return 0;
}