//Description: To reverse a string entered by the user without using string library functions.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[45],temp=0;
	int length=0,i,j;
	printf("Enter the string: ");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		length+=1;
	}
	printf("The length of the string is: %d\n",length);
	for(i=0,j=length-1;i<j;i++,j--)
	{
		temp=str[j];
		str[j]=str[i];
		str[i]=temp;
	}
	printf("The reversed string is: %s\n",str);
	
	return 0;
}
