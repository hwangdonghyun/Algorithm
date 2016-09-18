#include <stdio.h>
#include <math.h>

int location(int low, int high, int x, int* dataArray)
{
	int mid = 0;
	
	if (low > high)
		return -1;
	else
	{
		mid = (low + high) / 2;
		if (x == dataArray[mid])
			return mid;
		else if (x < dataArray[mid])
			return location(low, mid - 1, x, dataArray);
		else
			return location(mid + 1, high, x, dataArray);
	}
}
int main(void)
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n",location(0, 9, 10, arr));
}