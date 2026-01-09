#include <iostream>
using namespace std;

//    Arithmetic <int> obj(11, 10);

template <class T>
class Arithmetic
{

public:
    T No1;
    T No2;

    Arithmetic(T A, T B); // Only Declarations

    T Addition();

    T Substraction();
};

template <class T>
Arithmetic<T>::Arithmetic(T A, T B) //     using    class_name<T> and (::) to call behaviours
{
    No1 = A;
    No2 = B;
}

template <class T>
T Arithmetic<T>::Addition()
{
    T Ans;
    Ans = No1 + No2;

    return Ans;
}

template <class T>
T Arithmetic<T>::Substraction()
{
    T Ans;
    Ans = No1 - No2;

    return Ans;
}

int main()
{
    // Arithmetic<int> iobj(11, 10); //<int>  specifying datatype to object

    Arithmetic<int> *iobj = new Arithmetic<int>(11, 10); // Dynamic   (use    <int>)

    cout << "Addition is : " << iobj->Addition() << "\n";
    cout << "Substraction is : " << iobj->Substraction() << "\n";

    // Arithmetic<double> dobj(14.16445, 11.1545); //<double>  specifying datatype to object

    Arithmetic<double> *dobj = new Arithmetic<double>(151.8548, 12.448); // Dynamic   (use    <double>)

    cout << "Addition is : " << dobj->Addition() << "\n";
    cout << "Substraction is : " << dobj->Substraction() << "\n";

    delete iobj; // delete allocated memory
    delete dobj;

    return 0;
}
