//Description:To find the frequency of each characters in the inputed string
//Author:Angelina Rose Varghese
//Date:25/02/2025
#include <stdio.h>
int main()
{
    char words[45],i,j;
    int length=0;
    printf("Enter the string: ");
    scanf("%[^\n]",words);
    for(i=0;words[i]!='\0';i++)
    {
        length+=1;
    }
    for(i=0;i<length;i++)
    {
        if(length!='\0')
        {
            int count=1;
            for(j=i+1;j<length;j++)
            {
                if(words[i]==words[j])
                {
                    count+=1;
                    words[j]='\0';
                }
            }
            printf("The character %c has %d\n",words[i],count);
        }
    }
    return 0;
}
