// Description:To swap 2 values using a temporary variable.
// Author: Angelina Rose Varghese
#include<stdio.h>
int main()
{ 
int num1,num2,temp;
num1=7;
num2=4;
printf("num1=%d and num2=%d\n",num1,num2);
temp=num1;
num1=num2;
num2=temp;
printf("num1=%d and num2=%d\n",num1,num2);
return 0;
}
