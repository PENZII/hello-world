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
    for (int i = 1; i <= 10; i++)
    {
        int j = i;
        while (j > 0)
        {
            cout << "*";
            j--;
        }
        cout << endl;
    }
    cout << endl;
    for (int I = 10; I >= 1; I--)
    {
        int J = I;
        while (J > 0)
        {
            cout << "*";
            J--;
        }
        cout << endl;
    }
    cout << endl;

    for (int a = 1; a <= 10; a++)
    {
        for (int c = 1; c < a; c++)
        {
            cout << " ";
        }
        for (int b = 11 - a; b >= 1; b--)
        {
            cout << "*";
        }cout << endl;
    }  cout << endl;
    for (int A = 1; A <= 10; A++)
    {
        for (int C = 1; C <= A; C++)
        {
            cout << "*";
        }
        for (int B = 11 - A; B >= 1; B--)
        {
            cout << " ";
        }cout << endl;
    }  cout << endl;
    return 0;
}
