#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    for (int i = 0; i < n; (cout << endl))
    {
        for (int j = 1; j <= (i + 1); j++)
            cout << j << " ";
        i++;
    }
    return 0;
}