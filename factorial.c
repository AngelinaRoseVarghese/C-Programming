// Description: To calculate the factorial of a given number using while loop. Validate the input to ensure it is  a positive integer
// Author: Angelina Rose Varghese
#include<stdio.h>
int main()
{
	int num,result=1;
	printf("Enter a number: ");
	scanf("%d",&num);
	if (num<=0)
		{
			printf("Invalid\n");
		}
	
		else
		{
			while (num>0)
			{		
			result=result*num;
			num= num-1;
			}
		printf("Factorial is %d\n",result);
		}
	
	return 0;
}
