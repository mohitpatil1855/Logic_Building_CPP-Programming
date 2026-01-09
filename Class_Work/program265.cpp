#include <iostream>
using namespace std;

template <class T> // template Header
T Add(T No1, T No2)
{
    T Ans;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    int iValue1 = 10,
        iValue2 = 11,
        iRet = 0;

    float fValue1 = 10.2f,
          fValue2 = 11.4f,
          fRet = 0.0f;

    double dValue1 = 10.4,
           dValue2 = 11.7,
           dRet = 0.0;

    iRet = Add(iValue1, iValue2);

    fRet = Add(fValue1, fValue2);

    dRet = Add(dValue1, dValue2);

    cout << "Addition of integer is : " << iRet << "\n";
    cout << "Addition of float is : " << fRet << "\n";
    cout << "Addition of double is : " << dRet << "\n";

    return 0;
}