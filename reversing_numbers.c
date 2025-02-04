#include<stdio.h>
int main()
{
	int num,reminder,result=0;
	printf("Enter a number to reverse: ");
	scanf("%d",&num);
	while (num>0)
	{
		reminder=num%10;
		result=result*10+reminder;
		num=num/10;
	}
	printf("The reversed number is %d\n",result);
	return 0;
}
