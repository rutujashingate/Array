#include<stdio.h>

#define max 20
int main()
{
	int i,n,j;
	int arr[max];
	int ch;
	int flag=0,s,loc;
	int newele,temp,mid;
	int lb,ub;
	do
	{
		menu:
		printf("1-Create\n2-Display\n3-Search\n4-Delete\n5-Insert\n6-Sort");
		printf("\nEnter your choice");
        scanf("%d",&ch);
			
		
		
		
		switch(ch)
		{
			case 1:
				printf("\nEnter how many elements do you want in the array");
				scanf("%d",&n);
				printf("\nEnter your elements");
				for(i=0;i<n;i++)
				{
						scanf("%d",&arr[i]);
					
				}
			
				break;
				
			case 2:
				printf("\n-------Array elements are-------");
				for(i=0;i<n;i++)
				{
					printf("%5d",arr[i]);
				}
				break;
				
			case 3:
				printf("\n1-Linear Search\n2-Binary Search");
				printf("\nEnter your choice");
				scanf("%d",&ch);
				if(ch==1)
				{
					printf("\nEnter element to search in the array");
				    scanf("%d",&s);
				    for(i=0;i<n;i++)
				    {
				     	if(arr[i]==s)
					   {
						   flag=1;
						   break;
					   }
				    }
				    if(flag)
				    {
					    printf("%d element found at %d location",s,loc);
				    }
				    else
			     	{
					    printf("%d element not found in array",s);
				    }
			    }
				 else if(ch==2)
				 {
				 	lb=0;
				 	ub=n-1;
				 	printf("\nEnter element to search in the array");
				 	scanf("%d",&s);
				 	while(lb<=ub)
				 	{
				 		mid=lb+ub/2;
				 		if(arr[mid]==s)
				 				{
				 					printf("%d Element found ",s);
				 					break;
								 }
								 else if(arr[mid]>s)
								 {
								 	ub=mid-1;
								 	
								 }
								 else if(arr[mid]<s)
								 {
								 	lb=mid+1;
								 	
								 }
				 		 }
				 		
				 		 
				 	}
				 	
				 	break;
				 			
						 
				 		
					 
				 
				
				case 4:
					printf("Enter new value and location for new value");
					scanf("%d%d",&newele,&loc);
					for(i=n-1;i>=loc-1;i--)
					{
						arr[i+1]=arr[i];
					}
					arr[i+1]=newele;
					n++;
					break;
				
				case 5:
					printf("Enter location to delete value");
					scanf("%d",&loc);
					temp=arr[loc-1];
					for(i=loc-1;i<n;i++)
					{
						arr[i]=arr[i+1];
					}
					printf("%d element is deleted from array",temp);
					n--;
					break;
					
				case 6:
					sort:
					printf("\n1-Ascending order\n2-Descending");
					printf("\nEnter your choice");
					scanf("%d",&ch);
					if(ch==1)
					{
					  for(i=0;i<n;i++)
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
					  }
			     	
					printf("\nSorted Array is");
					for(i=0;i<n;i++)
					{
						printf("%5d",arr[i]);
					}
				}
				else if(ch==2)
				{
					for(i=0;i<n;i++)
					  {
						for(j=i+1;j<n;j++)
						{
							if(arr[i]<arr[j])
							{
								temp=arr[i];
								arr[i]=arr[j];
								arr[j]=temp;
							}
						}
					
				}
				printf("\nSorted Array is");
					for(i=0;i<n;i++)
					{
						printf("%5d",arr[i]);
					}
			}printf("\nDo you want to continue");
			printf("\n1-Sort Again\n2-Main menu");
			scanf("%d",&ch);
			if(ch==1)
			{
				goto sort;
			}
			else
			{
				goto menu;
			}
		
					
			
										
				
		}printf("\nDo you want to continue");
		scanf("%d",&ch);
	}
		while(ch==1);
		printf("Thankyou");
		return 0;
}
