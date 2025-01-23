#include <iostream>
using namespace std;

int main()
{
    int count;
    cout << "Enter the Number: ";
    cin >> count;

    for (int i = 1; i <= count; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}