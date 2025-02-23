//Description:Compare a array string to another.
//Author: Angelina Rose Varghese
//Date: 23/02/2025
#include<stdio.h>
int main()
{
	 char word1[45],word2[45],i,flag=0;
	 printf("Enter the string: ");
	 scanf("%s",word1);
	 printf("Enter the string: ");
	 scanf("%s",word2);
	 for(i=0;word1[i]!='\0';i++)
	 {
	     if(word2[i]==word1[i])
	     {
	        flag=1;
	     }
	     if(flag==0)
	        {
	            printf("Not same");
	            return 0;
	        }
	     else
	     printf("Same");
	     return 0;
	 }
	 printf("%s",word2);
	return 0;
}	
