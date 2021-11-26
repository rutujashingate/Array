#include<stdio.h>
int main()
{
	int n1,n2;
	int sum;
	int &p1=&n1;
	int &p2=&n2;
	int *ptr;
	ptr=&sum;
	
	printf("Enter n1 and n2");
	scanf("%d%d",&n1,&n2);
	
	sum=*p1+*p2;
	printf("\nNumber 1 is:%d",*p1);
	printf("\nNumber 2 is:%d",*p2);
	printf("\nValue of sum using pointer:%d",*ptr);
	printf("\nAddress of sum using pointer :%u",ptr);
	printf("\nAddress of pointer:%u",&ptr);
	

}
