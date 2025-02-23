//Description:Copy a array string to another.
//Author: Angelina Rose Varghese
//Date: 23/02/2025
#include<stdio.h>
int main()
{
	 char word1[45],word2[45],i;
	 printf("Enter the string: ");
	 scanf("%s",word1);
	 for(i=0;word1[i]!='\0';i++)
	 {
	     word2[i]=word1[i];
	 }
	 printf("%s",word2);
	return 0;
}	
