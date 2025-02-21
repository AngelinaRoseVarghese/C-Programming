//Description:Write a C program to enter a number and print it in words.
//Author: Angelina Rose Varghese
//Date:21/02/2025
#include <stdio.h>
int main() 
{
    int num,i,digit;
    printf("Enter the number to be printed: ");
    scanf("%d",&num);
    while(num>0)
    {
        digit=num%10;
        {
            switch(digit)
            {
                case 0:
                printf("Zero\t");
                break;
                
                case 1:
                printf("One\t");
                break;
                
                case 2:
                printf("Two\t");
                break;
                
                
                case 3:
                printf("Three\t");
                break;
                
                case 4:
                printf("Four\t");
                break;
                
                case 5:
                printf("Five\n");
                break;
                
                case 6:
                printf("Six\t");
                break;
                
                case 7:
                printf("Seven\t");
                break;
                
                case 8:
                printf("Eight\n");
                break;
                
                case 9:
                printf("Nine\t");
                break;
                
                default:
                printf("Error\t");
                break;
            }
            num=num/10;
        }
    }
    return 0;
}
