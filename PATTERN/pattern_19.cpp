#include <iostream>
using namespace std;
int main()
{
    int count;
    cout << "Enter the Number: ";
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count - i-1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 0; i <= count; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < count - i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}