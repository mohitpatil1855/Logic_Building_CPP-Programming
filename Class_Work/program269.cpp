#include <iostream>
using namespace std;

// template <class T>
// T Maximum(T No1, T No2, T No3)
// {
//     if (No1 > No2)
//     {
//         if (No1 > No3)
//         {
//             return No1;
//         }
//         else if (No3 > No1)
//         {
//             return No3;
//         }
//     }
//     else
//     {
//         if (No2 > No3)
//         {
//             return No2;
//         }
//         else if (No3 > No2)
//         {
//             return No3;
//         }
//     }
// }

template <class T>

T Maximum(T No1, T No2, T No3)
{
    if (No1 > No2 && No1 > No3)
    {
        return No1;
    }
    else if (No2 > No1 && No2 > No3)
    {
        return No2;
    }
    else
    {
        return No3;
    }
}

int main()
{
    double dValue1 = 10.6,
           dValue2 = 11.6,
           dValue3 = 21.2,
           dRet = 0;

    dRet = Maximum(dValue1, dValue2, dValue3);

    cout << "Maximum of integer is : " << dRet << "\n";

    return 0;
}