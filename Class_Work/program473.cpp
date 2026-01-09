// Program 108.java   OOP Concepts

#include <iostream>
using namespace std;

class ArrayX
{
public:
    int *Arr; // int Arr[];          //Error Not Allowed
    int iSize;

    ArrayX(int no)
    {
        cout << "Inside Constructor..!\n";
        iSize = no;
        Arr = new int[iSize];
    }

    ~ArrayX()
    {
        cout << "Inside Destructor..! \n";
        delete[] Arr;
    }

    void Accept()
    {
        int iCnt = 0;

        cout << "Enter the Elements : \n";

        for (iCnt = 0; iCnt < iSize; iCnt++)
        {
            cin >> Arr[iCnt];
        }
    }

    void Display()
    {
        int iCnt = 0;

        cout << "Elements of the Array are : \n";

        for (iCnt = 0; iCnt < iSize; iCnt++)
        {
            cout << Arr[iCnt] << "\t";
        }
        cout << "\n";
    }
};

int main()
{
    int iLength = 0;

    cout << "Enter the Number of Elements : \n";
    cin >> iLength;

    // Step 1 : Allocate the Memory
    ArrayX *aobj = new ArrayX(iLength);

    // Step 2 : Use the Memory
    aobj->Accept();
    aobj->Display();

    // Step 3 : Deallocate the Memory
    delete aobj;

    return 0;
}