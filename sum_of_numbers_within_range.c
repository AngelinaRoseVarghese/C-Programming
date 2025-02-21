// Description: Write a C program to find sum of even numbers in a given range.(Exclusive of limit)
// Author:Angelina Rose Varghese
//Date:16/02/2025
#include <stdio.h>

int main()
{
   int sum=0,limit,i;
   printf("Enter the limit: ");
   scanf("%d",&limit);
  
   for(i=0;i<=limit;i++)
   {
        if(i%2==0)
        sum=sum+i;
   }
    printf("%d\n",sum);
    return 0;
}
