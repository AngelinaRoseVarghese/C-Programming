#include<stdio.h>
void fun()
{
	auto int num=10;
	num++;
	printf("The value of number: %d\n",num);
} 

void fun2()
{
	static int num=10;
	num++;
	printf("The value of number: %d\n",num);
}
int num=20;
int main()
{
	printf("\tAutomatic\n");
	fun();
	fun();
	printf("\tStatic\n");
	fun2();
	fun2();
	int num1=25;
	printf("\tRegister\n");
	printf("The value is %d\n",num1);
	printf("\tExternal\n");
	printf("The value is %d\n",num);
	return 0;
}
