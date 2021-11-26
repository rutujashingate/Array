#include<stdio.h>
int main()
{
	int i;
	int arr[10];
	int earr[10],oarr[10];
	int j,k;
	i=0;
	j=0;
	k=0;
	
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
			earr[j]=arr[i];
			j++;
		}
		else
		{
			oarr[k]=arr[i];
			k++;
		}
	}
	printf("\nEven nos are:%d",j);
	for(i=0;i<j;i++)
	{
	printf("%5d",earr[i]);
    }
    printf("\nOdd nos are:%d",k);
	for(i=0;i<k;i++)
	{
	printf("%5d",oarr[i]);
    }
}
