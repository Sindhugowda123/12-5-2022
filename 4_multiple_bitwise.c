#include<stdio.h>
int main()
{
	int arr[5] = {4,8,5,20,6};
	for(int i=0;i<5;i++)
	{
		if((arr[i] & 3)==0)
		{
			printf("%d is a multiple of 4\n", arr[i]);
		}
	}
}

