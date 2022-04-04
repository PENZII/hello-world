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
    unsigned int sum = 1;
    int c, j, e;
    for (int i = 1; i <= 10; i++)
    {
        sum = 1000;
        j = i;
        sum = sum * 105;
        while (j > 0)
        {
            sum = sum * 105;
            j--;
            sum = sum / 100;
        }

        c = sum % 100;
        e = sum / 100;
        cout << e << "." << c << endl;
    }


    return 0;
}
