#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    char test = 'A';
    test = test + 1;
    cout << test;
    for (int i = 0; i < n; i++)
    {
        char ascii = 'A';
        for (int j = 0; j < n; j++)
        {
            ascii = 'A' + j;
            cout << ascii << " ";
        }

        cout << endl;
    }

    return 0;
}