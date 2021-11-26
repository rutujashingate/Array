#include<stdio.h>
int main()
{
	int i,s=0;
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
	printf("\nREVERSE:-");
	for(i=9;i>=0;i--)
	{
		printf("%5d",arr[i]);
	}
	printf("\nSUM OF 10 NOS:-");
	for(i=0;i<10;i++)
	{
		s=s+arr[i];
	}
	printf("%5d",s);
}


