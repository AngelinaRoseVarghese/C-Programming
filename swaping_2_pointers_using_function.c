#include<stdio.h>
void swap(int *num1, int *num2)
{
	int temp=0;
	temp=*num1;
	*num1=*num2;
	*num2=temp;
}
int main()
{
	int n1,n2;
	printf("Enter the two values: ");
	scanf("%d%d",&n1,&n2);
	printf("Before swapping: num1=%d and num2=%d\n",n1,n2);
	swap(&n1,&n2);
	printf("After swapping: num1=%d and num2=%d\n",n1,n2);
	return 0;
}
