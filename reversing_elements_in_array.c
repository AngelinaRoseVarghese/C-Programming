//Description: To reverse the elements of the array
// Author:Angelina Rose Varghese
//Date:13/02/2025
#include <stdio.h>
int main()
{
    int count,i,j;
    printf("How many numbers you want to enter: ");
    scanf("%d",&count);
    int num[count];
    printf("Enter the elements: ");
    for(i=0;i<count;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("The reversed array is: ");
    for(j=count-1;j>=0;j--)
    {
        printf("%d\t",num[j]);
    }
    return 0;
}
