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
    int a = 1;
    for (int i = 1; i <= 15; i++)
    {
        if (i % 2 == 0)
            a = a;
        else
            a = a * i;
    }
    cout << a;
    return 0;
}
