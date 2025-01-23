#include <stdio.h>

int main()
{
	int size = 5;
	int arr[5] = {3, -2, 1, 2, 5};
	int max = -999999;
	// 1 2 3 4 5
	for (int i = 0; i < size; i++)
		if (arr[i] > max)
			max = arr[i];
	printf("MAX:%d\n", max);
	int Pair = max / 2;
	printf("%d\n", Pair);
	int SumEachPair = (max + 1);
	printf("%d\n", SumEachPair);
	int Nsum = ((max + 1) * max) / 2;
	printf("%d\n", Nsum);
	int ArrSum = 1;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 1)
		{
			ArrSum += arr[i];
		}
	}
	printf("%d\n", ArrSum);
	printf("%d\n", Nsum - ArrSum);

	return 0;
}