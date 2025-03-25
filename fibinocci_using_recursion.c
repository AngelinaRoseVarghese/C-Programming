#include<stdio.h>
int fun(int count)
{
	if(count==0)
	{
		return 0;
	}
	else if(count==1)
	{
		return 1;
	}
	else
	{
		return fun(count-1)+fun(count-2);
	}
}
int main()
{
	int count,i;
	printf("Enter the count: ");
	scanf("%d",&count);
	for(i=0;i<count;i++)
	{
		printf("%d  ",fun(i));
	}
	return 0;
}
	
