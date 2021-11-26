#include<stdio.h>

#define max 20
int main()
{
	int i,n;
	int arr[max];
	int ch;
	int flag=99,s,loc;
	int newele,temp;
	do
	{
		flag==99;
		printf("1-Create\n2-Display\n3-Search\n4-Insert\n5-Delete\n6-Sort");
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
				printf("\nEnter element to search in the array");
				scanf("%d",&s);
				for(i=0;i<n;i++)
				{
					if(arr[i]==s)
					{
						flag=i;
						break;
					}
				}
				if(flag<n)
				{
					printf("%d element found at %d location",s,flag,loc);
				}
				else
				{
					printf("%d element not found in array",s);
				}
				break;
				
				case 4:
					printf("Enter new value and location for new value");
					scanf("%d%d1",&newele,&loc);
					for(i=n-1;i>=loc-1;i--)
					{
						arr[i+1]=arr[i];
					}
					arr[i+1]=newele;
					n++;
					break;
				
				case 5:
					printf("\nEnter location to delete value");
					scanf("%d",&loc);
					temp=arr[loc-1];
					for(i=loc-1;i<n;i++)
					{
						arr[i]=arr[i+1];
					}
					printf("%d element is deleted from array",temp);
					n--;
					break;
					
				
		}printf("\nDo you want to continue");
		scanf("%d",&ch);
	}
		while(ch==1);
		printf("Thankyou");
		return 0;
}
