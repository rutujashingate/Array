#include<stdio.h>
int main()
{
	int i;
	int arr[10];
	
	printf("\nEnter any 10 nos");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nARRAY:-");
	for(i=0;i<10;i++)
	{
		printf("%5d",arr[i]);
	}
	printf("\nEven nos in array are:-");
	for(i=0;i<10;i++)
	{
		if(arr[i]%2==0)
		{
			printf("%5d",arr[i]);
		}
	}
	
	printf("\nOdd nos in array are:-");
	for(i=0;i<10;i++)
	{
		if(arr[i]%2!=0)
		{
			printf("%5d",arr[i]);
		}
	}
}
