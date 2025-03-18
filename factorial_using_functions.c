#include<stdio.h>
int factorial(int);
int main()
{
	int result,num1;
	result=factorial(num1);
	printf("The factorial is %d\n",result);
	return 0;
	}
	int factorial(int num1)
	{
		int factorial=1,i,rem;
		printf("Enter the number: ");
		scanf("%d",&num1);
		while(num1>0)
		{
			factorial=factorial*num1;
			num1=num1-1;
		}
		return factorial;
	}

