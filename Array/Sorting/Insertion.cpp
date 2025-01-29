#include <iostream>
using namespace std;

void Insertion(int *arr, int size)
{
    for (int i = 1; i < size; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
            else
            {
                break;
            }
        }
    }
}

int main()
{
    int arr[100];
    int size;
    cout << "Enter the Size of the Array: ";
    cin >> size;
    cout << "Enter the Element of Array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    Insertion(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}