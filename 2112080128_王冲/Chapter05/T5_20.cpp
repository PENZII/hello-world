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
    for (int side1 = 1; side1 < 499; side1++)
    {
        for (int side2 = side1; side2 < 499; side2++)
        {
            for (int hypotenuse = side2; hypotenuse <= 500; hypotenuse++)
            {
                if (side1 * side1 + side2 * side2 == hypotenuse * hypotenuse)
                    cout << side1 << " " << side2 << " " << hypotenuse << endl;
                else;

            }
        }
    }
    return 0;
}