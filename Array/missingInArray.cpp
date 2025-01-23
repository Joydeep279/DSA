#include <iostream>
using namespace std;
int main()
{
    int arr[4] = {1, 2, 3, 5};
    int term = (sizeof(arr) / sizeof(arr[0])) + 1;
    int sum = (term + 1) * term / 2;
    int arrSum = 0;

    for (int i = 0; i < term - 1; i++)
        arrSum += arr[i];
    cout << sum - arrSum;
    return 0;
}