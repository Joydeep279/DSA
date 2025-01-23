#include <iostream>
using namespace std;
int main()
{
    int firstMax = -1;
    int secondMax = -1;
    int arr[10] = {12, 2, 33, 1, 3, 22, 4, 35, 6, 56};
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]>firstMax)
        {
            secondMax = firstMax;
            firstMax = arr[i];
        }
        else if (secondMax < arr[i] && arr[i] != firstMax)
        {
            secondMax = arr[i];
        }
    }
    cout << secondMax << endl;
    for (int i = 0; i < 10; i++)
    {
        
    }
    

    return 0;
}