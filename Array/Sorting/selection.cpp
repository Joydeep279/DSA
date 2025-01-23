#include <iostream>
using namespace std;
int main()
{

    int arr[] = {12, 34, 1, 6, 2, 34};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size - 1; i++)
    {
        int index = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }
        }

        swap(arr[i], arr[index]);
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}