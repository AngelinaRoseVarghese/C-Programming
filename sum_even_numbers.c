//Description: Write a C program to find sum of even numbers in a given range.(Exclusive of limit). Input range : 5  12.Expected Output :Sum = 24
//Author: Angelina Rose Varghese
//Date: 06/02/2025
#include<stdio.h>
int main ()
{
    int num1, num2,result;
    printf("Enter the starting and ending numbers to find the sum: ");
    scanf("%d%d",&num1,&num2);
    for (result=0;num1<num2;num1++)
    {
        if (num1%2==0)
        {
            result+=num1;
        }
    }
    printf("The sum of even numbers in a given range is %d\n",result);
    return 0;
}
