#include <iostream>
using namespace std;

int main()
{
    int count;
    cout << "Enter the Number: ";
    cin >> count;

    for (int i = 1; i <= count; (i++, cout << endl))
    {
        for (int j = 1; j <=i; j++)
        {
            cout << j << " ";
        }
    }

    return 0;
}