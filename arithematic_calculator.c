#include<stdio.h>
int main()
{
	int num1,num2,result;
	printf("Enter 2 numbers: ");
	scanf("%d%d",&num1,&num2);
	char operator;
	printf("Input which operation you want: ");
	scanf(" %c",&operator);
	switch(operator)
	{
		case '+':
		result=num1+num2;
		printf("The result is %d\n",result);
		break;
		case '-':
		result=num1-num2;
		printf("The result is %d\n",result);
		break;
		case '*':
		result=num1*num2;
		printf("The result is %d\n",result);
		break;
		case '/':
			if (num2!=0)
			{
				result=num1/num2;
				printf("The result is %d\n",result);
			}
			else
			{
				printf("Invalid entry");
			}
		break;
		case '%':
		if (num2!=0)
			{
				result=num1 % num2;
				printf("The result is %d\n",result);
			}
			else
			{
				printf("Invalid entry");
			}
		break;
	}
	return 0;
}
