// Description:To check palindrome
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
        words1[i]=words[i];
    }
    printf("The length of the string is: %d\n",length);

    for(i=0,j=length-1;i<j;i++,j--)
    {
        temp=words1[j];
        words1[j]=words[i];
        words1[i]=temp;
    }
    printf("The reversed string is: %s\n",words1);
    for(i=0;words[i]!='\0';i++)
    {
        if(words[i]!=words1[i])
        {
            printf("Its not a palindrome");
            return 0;
        }
        else
        {
            printf("It a palindrome");
            return 0;
        }
    }
    return 0;
}
