//Description:A perfect number is a positive integer that is equal to the sum of its proper divisors, excluding the number itself. For example, 6 is a perfect number because 1+2+3=6.
//Author: Angelina Rose Varghese
//Date:21/02/2025
#include <stdio.h>
int main() 
{
    int num,i,result=0;
    printf("Enter the number to be checked: ");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        result=result+i;
    }
    if(num==result)
    {
        printf("It is a perfect number");
    }
    else
    {
        printf("It is not a perfect number");
    }
    return 0;
}
