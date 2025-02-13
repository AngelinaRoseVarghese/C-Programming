//Description: To find the occurance of the even and odd numbers
// Author:Angelina Rose Varghese
//Date:13/02/2025
#include <stdio.h>
int main()
{
    int count,i,frequency_odd=0,frequency_even=0;
    printf("How many elements you want to enter: ");
    scanf("%d",&count);
    int num[count];
    printf("Enter the element: ");
    for(i=0;i<count;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<count;i++)
    {
        if(num[i] % 2==0)
        {
            frequency_even+=1;
        }
        else
        {
            frequency_odd+=1;
        }
    }
    printf("There are %d times of even numbers in the array\n",frequency_even);
    printf("There are %d times of odd numbers in the array\n",frequency_odd);
    return 0;
}
