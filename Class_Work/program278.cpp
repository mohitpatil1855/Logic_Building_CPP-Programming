#include <iostream>
using namespace std;

// OOP approach

class Arithmetic
{
public:
    int iNo1;
    int iNo2;

    Arithmetic(int A, int B)

    {
        iNo1 = A;
        iNo2 = B;
    }

    int Addition()
    {
        int Ans = 0;
        Ans = iNo1 + iNo2;
        return Ans;
    }

    int Substraction()
    {
        int Ans = 0;
        Ans = iNo1 - iNo2;
        return Ans;
    }
};

int main()
{
    Arithmetic aobj1(11, 10);
    Arithmetic aobj2(50, 25);

    cout << aobj1.Addition() << "\n";
    cout << aobj1.Substraction() << "\n";

    cout << aobj2.Addition() << "\n";
    cout << aobj2.Substraction() << "\n";

    return 0;
}