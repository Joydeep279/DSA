#include <iostream>
using namespace std;
int main()
{
    char ascii = 65;
    int ascii_Z = 'Z';

    for (int i = 0; i < 26; i++)
    {
        cout << ascii << " " << endl;
        ascii++;
    }
    return 0;
}
