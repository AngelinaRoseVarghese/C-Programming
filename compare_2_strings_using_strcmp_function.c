// Description:To compare two strings using strcmp() function,
//Author:Angelina Rose Varghese
//Date:24/02/2025
#include <stdio.h>
#include<string.h>
int main()
{
    char words[45],word1[45],i,j;
    printf("Enter the word: ");
    scanf("%s",words);
    printf("Enter the second word: ");
    scanf("%s",word1);
    int result=strcmp(words,word1);
    if (result==0)
    {
        printf("The both strings are same");
        return 0;
    }
    else
    {
        printf("The both strings are not same");
        return 0;
    }
    return 0;
}
