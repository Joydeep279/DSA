#include <iostream>
using namespace std;

void selection(char arr[], int size)
{
    for (int i = 0; i < (size - 1); i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}
int main()
{
    char arr[100];
    int size;
    cout << "Enter the Size of the Array: ";
    cin >> size;
    cout << "Enter the Element of Array (Maintain same Case type): ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    selection(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}