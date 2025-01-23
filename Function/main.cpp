#include <iostream>
using namespace std;
int SUM(int a, int b)
{
    int result = a + b;

    return a + b;
}
int main()
{
    int a, b;
    cout << "Enter the First Number: ";
    cin >> a;
    cout << "Enter the Second Number: ";
    cin >> b;
    int temp;
    int *ptr = &temp;
    cout << *(ptr) << endl;
    cout << temp << endl;
    cout << SUM(a, b);
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the Value of:");
    }
    cout << endl;
    return 0;
}