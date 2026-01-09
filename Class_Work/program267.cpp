#include <iostream>
using namespace std;

double Maximum(double No1, double No2)
{
    if (No1 > No2)
    {
        return No1;
    }
    else
    {
        return No2;
    }
}

int main()
{
    double dValue1 = 10.6,
           dValue2 = 11.6,
           dRet = 0;

    dRet = Maximum(dValue1, dValue2);

    cout << "Maximum of integer is : " << dRet << "\n";

    return 0;
}