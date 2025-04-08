#include<stdio.h>
int main()
{
	int value;
	int *a,**b;
	printf("Enter a value: ");
	scanf("%d",&value);
	a=&value;
	b=&a;
	printf("The given value: %d\n",value);
	
	printf("The value of the pointer: %d\n",*a);
	
	printf("The value of the multiple pointer: %d\n",**b);
	return 0;
}
