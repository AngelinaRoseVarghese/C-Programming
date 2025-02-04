#include<stdio.h>
int main()
{
	int input,num,reminder,result=0;
	printf("Enter the number: ");
	scanf("%d",&num);
        input=num;
	
	while (num>0)
	{
		reminder=num%10;
		result=result*10+reminder;
		num=num/10;
	}
	if (input==result)
	{
		printf("Number is palindrome\n");
	}
	else
	{
		printf("Number is not palindrome\n");
	}
	return 0;
}
