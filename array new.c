#include<stdio.h>
#define max 20
int main()
{
	int i,n;
	int arr[max],temp,j;
	
	printf("enter no of elements");
	scanf("%d",&n);
	printf("Enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%5d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{  
	   printf("%d\t",arr[i]);
	}
	  printf("\n\n");
	
	for(j=0;j<n;j++)
	{
	   temp=arr[n-1];
	      for(i=n-1;i>=0;i--)
             {
		        arr[i]=arr[i-1];
	           
			}
	  arr[0]=temp;
	for(i=0;i<n;i++)
	{  
	    printf("%5d\t",arr[i]);
	   
	}
	printf("\n\n");
	return 0;
}
}
