/*FileName:T5_.cpp
*Author��   Chong Wang
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
    double b, c, d, e, f, g, h, j, k, t;
    cin >> a;
    while (a)
    {
        switch (a)
        {
        case 1:cout << "�����뾭��Ĺ̶�����" << endl;
            cin >> b; cout << "������ܹ��ʣ�   " << b << endl;    cin >> a; break;
        case 2:
            cout << "������Сʱ���̶�Сʱ���ʼ�����ʱ��" << endl;
            cin >> c >> d; if (d <= 40)
                h = c * d;
            else
                h = (d - 40) * 1.5 * c + 40 * c;
            cout << "Сʱ�����ܹ���:   " << h << endl;     cin >> a;  break;

        case 3:cout << "Ӷ�����ۼ�����ÿ�����۶�" << endl;
            cin >> e >> j; k = 250 + 0.057 * j * e;
            cout << "Ӷ�𹤵��ܹ��ʣ�   " << k << endl;    cin >> a;   break;

        case 4:cout << "������Ƽ��������Ĳ�Ʒ������ÿ����Ʒ�Ĺ̶����" << endl;
            cin >> f >> g; t = f * g;
            cout << "��ʱ�����ܹ��ʣ�    " << t << endl;
            cin >> a;
        default: cin >> a; break;

        }
    }
    return 0;
}
