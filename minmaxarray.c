#include<stdio.h>
int main()
{
	int arr[10];
	int i;
	int min,max,avg;
	int sum=0;
	
	printf("Enter any 10 nos");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	min=arr[0];
	max=arr[0];
	
	for(i=1;i<10;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
		else if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	
	for(i=0;i<10;i++)
	{
		sum=sum+arr[i];
		avg=sum/10;
	}
	
	printf("\nMin value is:%d",min);
	printf("\nMax value is:%d",max);
	printf("\nAverage value is:%d",avg);
	
}
