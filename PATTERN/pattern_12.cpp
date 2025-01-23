#include <iostream>
using namespace std;

int main()
{
    int count;
    cout << "Enter the Number: ";
    cin >> count;

    for (int i = 0; i < count; (i++, cout << endl))
    {
        for (int j = 0; j < (count - i - 1); j++)
            cout << " ";
        for (int k = 0; k <= i; k++)
            cout << "* ";
    }

    return 0;
}