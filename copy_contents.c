//Description: A program to copy contents of one array to another
//Author:Angelina Rose Varghese
//Date:11/02/2025
#include<stdio.h>
int main()
{
	int count,i;
	printf("How many elements you want to enter: ");
	scanf("%d",&count);
	int num[count],copy[count];
	printf("Enter the elements: ");
	for (i=0;i<count;i++)
	{
		scanf("%d",&num[i]);
	}
	for (i=0;i<count;i++)
	{
		copy[i]=num[i];
	}
	printf("The copied array is: ")	;
	for (i=0;i<count;i++)
	{
		printf("%d\t",copy[i]);
	}
	return 0;
}
