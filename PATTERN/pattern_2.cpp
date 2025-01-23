#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int i = 0;

    for ((cout << "Entered First Argument\n"); (cout << "Entered Second Argument!\n"); (cout << "Entered Third Argument!\n"))
    {
        int test;
        // cout << &test << endl;
        if (i == (num - 1))
        {
            break;
        }

        for (int col = num; col >= 0; col--)
            cout << col << " ";
        cout << endl;
        i++;
    }

    char temp = 'A' + 1;
    cout << temp;

    return 0;
}
