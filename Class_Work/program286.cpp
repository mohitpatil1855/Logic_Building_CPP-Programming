#include <iostream>
using namespace std;

void displa()
{
    auto iCnt = 0; // Auto storage class

    cout << " Jai Ganesh..! " << iCnt << "\n";
    iCnt++;
    displa();
}

int main()
{
    displa();

    return 0;
}
