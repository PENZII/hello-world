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
    unsigned int count, i = 1;
    for (count = 1; count <= 10; ++count)
    {
        if (count < 5)
        {
            cout << count << " "; i++;
        }

        else count = 11;

    }     count = i;
    cout << "\nBroke out of loop at count = " << count << endl;
    return 0;
}