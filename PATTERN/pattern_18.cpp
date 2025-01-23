#include <iostream>
using namespace std;
int main()
{
    int count;

    cout << "Enter the NUmber: ";
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        char ascii;
        for (int j = 0; j < count - i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            ascii = 'A' + j;
            cout << ascii << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            ascii = ascii-1;
            cout << ascii << " ";
        }
        cout << endl;
    }

    return 0;
}