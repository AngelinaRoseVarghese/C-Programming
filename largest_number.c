// Description: To input 3 numbers and find the largest among them using nested if statements. Display appropriate messages for each scenario
// Author: Angelina Rose Varghese
#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter 3 numbers:");
	scanf("%d%d%d",&num1,&num2,&num3);
	if (num1>num2)
			{
				if (num1>num3)
					{
						printf("%d is the largest in three numbers\n",num1);
					}
				else
					{
						printf("%d is the largest in three numbers\n",num3);
					}
			}
	else
			{
				 if(num2>num3)
				 	{
				 		printf("%d is the largest in three numbers\n",num2);
				 	}
				 else
				 	{
						printf("%d is the largest in three numbers\n",num3);
					}
			}
	return 0;
}
