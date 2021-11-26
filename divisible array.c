#include<stdio.h>
int main()
{
	int i;
	int arr[10],cnt1=0,cnt2=0,cnt3=0,cnt4=0;
	
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
    	if((arr[i]%3==0)&&(arr[i]%5==0))
    	{
    		cnt1++;
		}
		else if((arr[i]%5==0))
		{
			cnt2++;
		}
		else if(arr[i]%3==0)
		{
			cnt3++;
		}
		else
		{
			cnt4++;
		}
	}
	printf("\nTotal nos divisible by 3 and 5:%d",cnt1);
	printf("\nTotal nos divisible by only 5:%d",cnt2);
	printf("\nTotal nos divisible by 3 :%d",cnt3);
	printf("\nTotal nos not divisible by 3 and 5:%d",cnt4);
	return 0;
}
