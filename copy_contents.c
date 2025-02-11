//Description: A program to copy contents of one array to another
//Author:Angelina Rose Varghese
//Date:11/02/2025
#include<stdio.h>
int main()
{
	int count,i,j;
	printf("How many elements you want to enter: ");
	scanf("%d",&count);
	int num[count],copy[count];
	printf("Enter the elements: ");
	for (i=0;i<count;i++)
	{
		scanf("%d",&num[i]);
		for (j=0;j<count;j++)
		{
			scanf("%d",&copy[j]);
		
		}
		
	}
	for (j=0;j<count;j++)
	{
		printf("%d\t",num[j]);
		
	}
	
	return 0;
}
