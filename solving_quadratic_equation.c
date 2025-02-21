// Description:Write a program to find the roots a quadratic equation.
//Author:Angelina Rose Varghese
//Date:09/02//2025

#include <stdio.h>
#include <math.h>
int main() 
{
   int num1,num2,num3;
   float result1,result2;
   printf("Enter the co.efficients of x: ");
   scanf("%d%d%d",&num1,&num2,&num3);
   
   result1=(-num2+sqrt((num2*num2)-(4*num1*num3)))/(2*num1);
   printf("x=%f\n",result1);
   result2=(-num2-sqrt((num2*num2)-(4*num1*num3)))/(2*num1);
   printf("x=%f",result2);
   return 0;
}
