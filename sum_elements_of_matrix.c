// Description:Sum of elements of a matrix.
//Author:Angelina Rose Varghese
// Date: 17/02/2025
#include <stdio.h>
int main()
{
    int row,column,i,j,sum=0;
    printf("Enter the no. of rows and columns: ");
    scanf("%d%d",&row,&column);
    int num[row][column];
    printf("Enter the elements: ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&num[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
           sum=sum+num[i][j];
        }
    }
    printf("The sum of the matrix is %d\n",sum);
    return 0;
}
