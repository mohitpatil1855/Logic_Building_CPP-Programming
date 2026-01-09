#include <iostream>
using namespace std;

void displa()
{
    static int iCnt = 0; // static storage class

    cout << " Jai Ganesh..! " << iCnt << "\n";
    iCnt++;
    displa();
}

int main()
{
    displa();

    return 0;
}
