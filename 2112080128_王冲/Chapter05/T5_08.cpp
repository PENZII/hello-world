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
    int a;
    int b;
    cin >> a;
    int s = 2147483647;
    for (int i = 1; i <= a; i++)
    {
        cin >> b;
        if (b >= s)
            s = s;
        else
            s = b;
    }  cout << s;
    return 0;
}
