//Description: A program to input elemets in one dimensional array and find the largest and smallest elements. Display their positions
//Author:Angelina Rose Varghese
//Date:11/02/2025
#include<stdio.h>
int main()
{
	int largest=0,smallest=0,count,position1=0,position2=0,i;
	printf("How many numbers you want to input: ");
	scanf("%d",&count);
	int num[count];
	printf("Enter the elements: ");
	for (i=0;i<count;i++)
	{
		
		scanf("%d",&num[i]);
	}
	largest=num[0];
	smallest=num[0];
	for (i=1;i<count;i++)
	{
		if (num[i]>largest)
		{
			largest=num[i];
			position1=i;
		}
		if (num[i]<smallest)
		{
			smallest=num[i];
			position2=i;
		}
	}
	printf("\nThe largest number in array is: %d and its position is: %d\n",largest,position1);
	printf("\nThe smallest number in array is: %d and its position is: %d\n",smallest,position2);
	return 0;
}
