//Description: A program to perform a sequential search ina one dimensional array. Input the array elements and the key to search. Display whether the key is found and its position
//Author:Angelina Rose Varghese
//Date:11/02/2025
#include<stdio.h>
int main()
{
	int i,position,key,flag=0,count;
	printf("How many elements you want to enter: ");
	scanf("%d",&count);
	int num[count];
	printf("Enter the elements: ");
	for(i=0;i<count;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("Enter the element you want to search: ");
	scanf("%d",&key);
	for(i=0;i<count;i++)
	{
		if (num[i]==key)
		{
			flag=1;
			position=i;
			break;
		}
	}
	if (flag=0)
	{
		printf("Element not found");
	}
	else
	{
		position=i;
		printf("The element:%d is found in %d\n",key,position);
	}
	
	return 0;
}
