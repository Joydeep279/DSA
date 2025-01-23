#include <iostream>
using namespace std;

int main()
{
    int deci;
    cout << "Enter the Decimal: ";
    cin >> deci;
    int rem;
    int result = 0;
    int multi = 1;
    while (deci)
    {
        rem = deci % 10;
        deci /= 10;
        result = rem * multi + result;
        multi = multi * 2;
    }
    cout << "Decimal: " << result;
    return 0;
}