#include <iostream>
using namespace std;

int main()
{

    int count;
    cout << "Enter the Number: ";
    cin >> count;
    for (int i = 0; i < count; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << j + 10 << " ";
        }
        cout << endl;
    }

    return 0;
}