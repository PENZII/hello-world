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
    cout << "a" << endl;
    int a, g, x, y, i, j, b;
    cin >> x >> y;
    if (!(x < 5) && !(y >= 7))
    {
        cout << "yes" << endl;
    }
    else cout << "no" << endl;
    if (!(x < 5) || (y >= 7))
    {
        cout << "yes" << endl;
    }
    else cout << "no" << endl;
    cout << "b" << endl;
    cin >> a >> b >> g;
    if (!(a == b) || !(g != 5))
    {
        cout << "yes" << endl;
    }
    else cout << "no" << endl;
    if (!(a == b) && (g != 5))
    {
        cout << "yes" << endl;
    }
    else cout << "no" << endl;
    cout << "c" << endl;
    cin >> x >> y;
    if (!(x <= 8) && (y > 4))
    {
        cout << "yes" << endl;
    }
    else cout << "no" << endl;
    if (!(x <= 8) || !(y > 4))
    {
        cout << "yes" << endl;
    }
    else cout << "no" << endl;
    cout << "d" << endl;
    cin >> i >> j;
    if (!(i > 4) || (j <= 6))
    {
        cout << "yes" << endl;
    }
    else cout << "no" << endl;
    if (!(i > 4) && !(j <= 6))
    {
        cout << "yes" << endl;
    }
    else cout << "no" << endl;
    return 0;
}
