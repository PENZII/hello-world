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
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 3 - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k <= i * 2; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int a = 0; a <= 3; a++)
    {
        for (int b = 0; b <= a; b++)
        {
            cout << " ";
        }
        for (int c = 0; c <= (3 - a) * 2; c++)
        {
            cout << "*";
        }cout << endl;
    }
    return 0;
}
