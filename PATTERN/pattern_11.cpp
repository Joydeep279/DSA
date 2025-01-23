#include <iostream>
using namespace std;

int main()
{

    int count;
    cout << "Enter the Number: ";
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        char ascii;
        for (int j = 0; j < count - i; j++)
        {
            ascii = 'A' + j;
            cout << ascii << " ";
        }
        cout << endl;
    }

    return 0;
}