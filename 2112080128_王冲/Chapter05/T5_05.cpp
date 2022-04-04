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
    int sum = 0;
    int b = 0;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        cin >> b;
        sum = sum + b;

    }
    cout << sum << endl;
    return 0;
}
