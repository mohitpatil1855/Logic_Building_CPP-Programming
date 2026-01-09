#include <iostream>
using namespace std;

template <class T> // Generic
T Addition(T No1, T No2)
{
    T Ans;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    cout << "Addition of Characters : " << Addition('a', 'b') << "\n";
    cout << "Addition of Integer : " << Addition(10, 11) << "\n";
    cout << "Addition of Float : " << Addition(5.5f, 5.9f) << "\n";
    cout << "Addition of Double : " << Addition(88.55458, 55.654578) << "\n";

    return 0;
}
