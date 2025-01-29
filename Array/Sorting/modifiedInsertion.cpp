#include <iostream>
using namespace std;

void Insertion(int *arr, int size)
{
    for (int i = size - 2; i >= 0; i--)
    {
        for (int j = i; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
            else
            {
                break;
            }
        }
    }

    return;
}
int main()
{
    int arr[10] = {-45, 45, 1, 67, 3, -89, 44, 61, 23, 3};
    int size = 10;
    // cout << "Enter the Size of the Array: ";
    // cin >> size;
    // cout << "Enter the Element of Array: ";
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> arr[i];
    // }

    Insertion(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}