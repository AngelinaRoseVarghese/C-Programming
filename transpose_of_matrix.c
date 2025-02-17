// Description:Find the transpose of a matrix.
//Author:Angelina Rose Varghese
// Date: 17/02/2025
#include <stdio.h>
int main()
{
    int row,column,i,j,sum=0;
    printf("Enter the no. of rows and columns: ");
    scanf("%d%d",&row,&column);
    int num[row][column],transpose[column][row];
    printf("Enter the elements: ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&num[i][j]);
            transpose[j][i]=num[i][j];
        }
    }
    printf("The transpose of the matrix is \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\t",transpose[j][i]);
        }
        printf("\n");
    }
    return 0;
}
