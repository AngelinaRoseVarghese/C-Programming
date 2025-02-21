//Description:Write a program in C to find HCF of two numbers.
//Author: Angelina Rose Varghese
//Date:21/02/2025
#include <stdio.h>
int main() 
{
    int num1,num2,i,result=0;
    printf("Enter the first number to be checked: ");
    scanf("%d",&num1);
    printf("Enter the second number to be checked: ");
    scanf("%d",&num2);
    for(i=1;i<num1;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
                result=i;
        }
    }
        printf("The greatest common divisor of these numbers is: %d\n",result);
    return 0;
}
