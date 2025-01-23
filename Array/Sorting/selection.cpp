#include <iostream>
using namespace std;
int main()
{
    int arr[] = {0, 1, 3, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    int result = 1;
    for (int i = 1; i < max; i++)
    {
        int flag = 0;
        for (int j = 0; j < size; j++)
        {
            if (i == arr[j])
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            result = i;
            break;
        }
    }
    cout << "Result: " << result;
    return 0;
}