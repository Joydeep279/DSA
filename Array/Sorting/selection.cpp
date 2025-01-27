#include <iostream>
using namespace std;

void Selection(int *arr, int size)
{
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
}
int main()
{

    int arr[] = {12, 34, 1, 6, 2, 34};
    int size = sizeof(arr) / sizeof(arr[0]);

    Selection(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}