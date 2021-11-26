#include<stdio.h>
#define max 20
int main()
{
	int arr[max];
	int i,j,n,temp;
	printf("How many numbers do you want in array max is 20:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	//sorting
/*	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}*/
	 
	 printf("\nSorted array is:");
	 for(i=0;i<n;i++)
	 {
	 	printf("%5d",arr[i]);
	 }
	 for(i=0;i<n;i++)
	 {
	 	for(j=i+1;j<n;++j)
	 	{
	 		if(arr[i]<arr[j])
	 		{
	 			temp=arr[i];
	 			arr[i]=arr[j];
	 			arr[j]=temp;
			}
		 }
	 }
	 
	 printf("\nsorted array is : ");
	 for(i=0;i<n;++i)
	 {
	 	printf("%5d",arr[i]);
	 }
	 return 0;
}
