#include <iostream>
using namespace std;

template <class T>
int CountFrequency(T Arr[], int iSize, T No) // return value should be int.. it returns only count in integer
{
    int iCnt = 0;
    int Count = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] == No)
        {
            Count++;
        }
    }

    return Count;
}

int main()
{
    float Brr[] = {10.1f, 20.2f, 30.3f, 40.4f, 50.5f, 10.1f};

    int iRet = 0;

    iRet = CountFrequency(Brr, 6, 10.1f);

    cout << "Count Frequency is : " << iRet << "\n";

    return 0;
}