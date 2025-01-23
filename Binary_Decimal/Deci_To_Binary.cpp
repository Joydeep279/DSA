#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the Number: ";
    cin >> num;
    int rem;
    int multi = 1;
    int result = 0;

    while (num > 0)
    {
        rem = num % 2;
        result = rem * multi + result;
        num /= 2;
        multi *= 10;
    }
    cout << "Binary: " << result;

    return 0;
}