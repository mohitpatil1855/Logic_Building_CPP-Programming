

#include <iostream>
using namespace std;

class ArrayX
{
public:
    int *Arr; // int Arr[];          //Error Not Allowed
    int iSize;

    ArrayX(int no); // only Declarations
    ~ArrayX();
    void Accept();
    void Display();
    int Addition();
};

ArrayX ::ArrayX(int no)
{
    cout << "Inside Constructor..!\n";
    iSize = no;
    Arr = new int[iSize];
}

ArrayX ::~ArrayX()
{
    cout << "Inside Destructor..! \n";
    delete[] Arr;
}

void ArrayX ::Accept()
{
    int iCnt = 0;

    cout << "Enter the Elements : \n";

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin >> Arr[iCnt];
    }
}

void ArrayX ::Display()
{
    int iCnt = 0;

    cout << "Elements of the Array are : \n";

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << Arr[iCnt] << "\t";
    }
    cout << "\n";
}

int ArrayX ::Addition()
{
    int iSum = 0;
    int iCnt = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
}

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

    cout << "Summation of all elements : " << aobj->Addition() << "\n";

    // Step 3 : Deallocate the Memory
    delete aobj;

    return 0;
}