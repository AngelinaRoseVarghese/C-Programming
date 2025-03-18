#include<stdio.h>
int palindrome(int);
int main()
{
	int num2,output,num1;
	printf("Enter a number: ");
	scanf("%d",&num1);
	output=palindrome(num1);
	if(output==num1)
	{
		printf("It is palindrome");
	}
	else
	{
		printf("It is  not palindrome");
	}
	return 0;
	}
int palindrome(int num1)
	{
		int num2,palindrome=0,rem;
		num2=num1;
		printf("the number is %d\n",num2);
		while(num1>0)
		{
			rem=num1%10;
			palindrome=palindrome*10+rem;
			num1=num1/10;
		}
		return palindrome;
		}
