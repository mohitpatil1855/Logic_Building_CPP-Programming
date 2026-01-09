#include <iostream>
using namespace std;

template <class T>
T Summation(T Arr[], int iSize)
{
    int iCnt = 0;
    T Sum; // Not initialized --> chances of garbage 

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        Sum += Arr[iCnt];
    }

    return Sum;
}

int main()
{
    float Brr[] = {10.1f, 20.2f, 30.3f, 40.4f, 50.5f};

    float fRet = 0;

    fRet = Summation(Brr, 5);

    cout << "Summation of Array is : " << fRet << "\n";

    return 0;
}