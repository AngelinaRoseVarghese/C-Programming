//Description: To print digits of the number
// Author: Angelina Rose Varghese
// Date: 07/02/2025
#include <stdio.h>
int main()
{
   int num,result=0;
   printf("Enter the number: ");
   scanf("%d",&num);
   while (num>=0)
   {
       result=num%10;
       num=num/10;
       printf("%d\n",result);
   }
   return 0;
}
