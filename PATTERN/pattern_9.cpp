#include <iostream>
using namespace std;
int main()
{
    int count;
    cout << "Enter the Number: ";
    cin >> count;
    char alpha;
    for (int i = 0; i < count; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            alpha = 'A' + j;
            cout << alpha << " ";
        }
        cout << endl;
    }

    return 0;
}