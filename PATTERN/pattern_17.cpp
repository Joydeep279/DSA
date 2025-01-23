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
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}