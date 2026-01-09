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

    Arithmetic<int> aobj1(10, 11);         // error removed by using <int>
    Arithmetic<double> aobj2(100.1, 50.2); // error removed by using <double>

    cout << aobj1.Addition() << "\n";
    cout << aobj1.Substraction() << "\n";

    cout << aobj2.Addition() << "\n";
    cout << aobj2.Substraction() << "\n";

    return 0;
}