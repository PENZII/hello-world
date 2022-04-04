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
    int a = 1, j = 1;
    cout << "³õÖµ";
    cout << "\t" << "½×³Ë";
    cout << endl;
    for (int i = 1; i <= 5; i++)
    {
        j = i;
        cout << i;
        while (j > 0)
        {
            a = a * j;
            j--;
        }
        cout << "\t" << a;
        cout << endl;
        a = 1;
    }
    return 0;
}
