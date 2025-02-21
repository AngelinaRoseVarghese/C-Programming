// Description: Write a C program to count number of digits in a number.
// Author:Angelina Rose Varghese
//Date:16/02/2025
#include <stdio.h>

int main()
{
   int num,count=0;
   printf("Enter the number: ");
   scanf("%d",&num);
   while(num>0)
   {
       num=num/10;
       count+=1;

   }
   printf("%d",count);
    return 0;
}
