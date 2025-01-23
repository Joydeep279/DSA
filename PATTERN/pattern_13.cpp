#include <iostream>
using namespace std;

int main()
{
    int count;
    cout << "Enter the Number: ";
    cin >> count;

    for (int i = 0; i < count; i++)
    {

        for (int j = 0; j < (count - i - 1); j++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            char ascii = 'A';
            ascii += j;
            cout << ascii << " ";
        }
        cout << endl;
    }

    return 0;
}