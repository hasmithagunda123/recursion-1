#include<stdio.h>
int sum(int a);
int main()
{
	int n,result;
	printf("enter the value of n");
	scanf("%d",&n);
	result=sum(n);
	printf("%d",result);
	
}
int sum(int n)
{
	if(n!=0)
	{
		return(n%10+sum(n/10));
	}
	else
	{
		return 0;
	}
}
