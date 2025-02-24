// Description:Reverse a string without using  inbuilt functions
//Author:Angelina Rose Varghese
//Date:24/02/2025
#include <stdio.h>
int main()
{
    char words[45],words1[45],i,j,temp=0;
    int length=0;
    printf("Enter the word: ");
    scanf("%[^\n]",words);
    for(i=0;words[i]!='\0';i++)
    {
        length+=1;
    }
    printf("The length of the string is: %d\n",length);
    for(i=0,j=length-1;i<j;i++,j--)
    {
        temp=words[j];
        words[j]=words[i];
        words[i]=temp;
    }
    printf("The reversed string is: %s\n",words);
    return 0;
}
