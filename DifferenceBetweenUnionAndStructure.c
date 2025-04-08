#include<stdio.h>
struct book
{
	char name [80];
	int price;
	float rate;
};
union character
{
	char name[80];
	int age;
	float rate;
};
int main()
{
	struct book book1;
	printf("Enter the name of book: ");
	scanf("%s",book1.name);
	printf("Enter the price of book: ");
	scanf("%d",&book1.price);
	printf("Enter the rating of book: ");
	scanf("%f",&book1.rate);
	
	printf("\tBook details\n");
	printf("name of book: %s\n",book1.name);
	printf("price of book: %d\n",book1.price);
	printf("rating of book:%f\n ",book1.rate);
	printf("The size used by structure:%ld\n",sizeof(book1));
	
	union character character1;
	printf("Enter the name of character: ");
	scanf("%s",character1.name);
	printf("Enter the age of character: ");
	scanf("%d",&character1.age);
	printf("Enter the rating of character: ");
	scanf("%f",&character1.rate);
	
	printf("\tCharacter details\n");
	printf("name of character:%s\n",character1.name);
	printf("age of character: %d\n",character1.age);
	printf("rating of character: %f\n",character1.rate);
	printf("The size used by union:%ld\n",sizeof(character1));
	return 0;
}
