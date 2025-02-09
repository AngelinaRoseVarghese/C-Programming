// Description:Write a program in C to display the multiplication table rom 1 to 5
//Author:Angelina Rose Varghese
//Date:09/02//2025

#include <stdio.h>
int main() 
{
   int i,j,result;
   for(i=1;i<=5;i++)
   {
       for(j=1;j<=10;j++)
       {
           result=i*j;
           printf("%dx%d=%d\t",i,j,result);
       }
  printf("\n");
   }
    return 0;
}
