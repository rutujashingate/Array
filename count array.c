#include<stdio.h>
int main()
{
	int i;
	int arr[10];
	int ecnt=0,ocnt=0;
	
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
	for(i=0;i<10;i++)
	{
		if(arr[i]%2==0)
		{
			ecnt++;
		}
		else
		{
			ocnt++;
		}
	}
	printf("\nTotal even nos are:%d",ecnt);
	printf("\nTotal odd nos are:%d",ocnt);
}
