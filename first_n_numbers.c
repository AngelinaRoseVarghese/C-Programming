// Description: To print first n natural number using while loop
// Author: Angelina Rose Varghese
#include<stdio.h>
int main()
{
	int num=0,limit;
	printf("Enter the limit: ");
	scanf("%d",&limit);
	while (num<=limit)
	{
		printf("%d\n",num);
		num++;
	
	}
	return 0;
}
	
