#include <iostream>
using namespace std;

// OOP approach with generic programming

template <class T>
class Arithmetic
{
public:
    T iNo1;
    T iNo2;

    Arithmetic(T A, T B)

    {
        iNo1 = A;
        iNo2 = B;
    }

    T Addition()
    {
        T Ans = 0;
        Ans = iNo1 + iNo2;
        return Ans;
    }

    T Substraction()
    {
        T Ans = 0;
        Ans = iNo1 - iNo2;
        return Ans;
    }
};

int main()
{
    int iValue1 = 10;
    int iValue2 = 11;

    Arithmetic aobj(iValue1, iValue2);        //Error

    cout << aobj.Addition() << "\n";
    cout << aobj.Substraction() << "\n";

    return 0;
}