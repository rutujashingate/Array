#include<stdio.h>

#define max 20
int main()
{
	int arr[max][max],arr2[max][max],arr3[max][max];
	int i,j,k;
	int r1,c1,r2,c2;
	int ch;
	
	matrix:
	
	printf("How many rows and columns do you want in your matrix1");
	scanf("%d%d",&r1,&c1);
	
	printf("How many rows and columns do you want in your matrix2");
	scanf("%d%d",&r2,&c2);
	
	
	
	if((r1==r2)&&(c1==c2))
	{
		printf("Enter your elements of matrix1");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&arr[i][j]);
			}
		}
		printf("Enter your elements of matrix2");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&arr2[i][j]);
			}
		}
		
	
		
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				arr3[i][j]=arr[i][j]+arr2[i][j];
			}
		}
	    
		
		printf("\n----------Matrix----------\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("%5d",arr3[i][j]);
			}
			printf("\n\n");
		}
    	}
    	else
	{
		printf("Addition not possible");
	}

			
	
