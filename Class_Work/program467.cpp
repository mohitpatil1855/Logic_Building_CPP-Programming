#include <iostream>
using namespace std;

//    Arithmetic <int> obj(11, 10);

template <class T>
class Arithmetic
{

public:
    T No1;
    T No2;

    Arithmetic(T A, T B)
    {
        No1 = A;
        No2 = B;
    }

    T Addition() // No parameter //takes from characteristics
    {
        T Ans;
        Ans = No1 + No2;

        return Ans;
    }

    T Substraction() // No parameter //takes from characteristics
    {
        T Ans;
        Ans = No1 - No2;

        return Ans;
    }
};

int main()
{
    Arithmetic<int> iobj(11, 10); //<int>  specifying datatype to object

    cout << "Addition is : " << iobj.Addition() << "\n";
    cout << "Substraction is : " << iobj.Substraction() << "\n";

    Arithmetic<double> dobj(14.16445, 11.1545);

    cout << "Addition is : " << dobj.Addition() << "\n";
    cout << "Substraction is : " << dobj.Substraction() << "\n";

    return 0;
}
