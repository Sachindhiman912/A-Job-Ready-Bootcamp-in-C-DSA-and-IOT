#include<stdio.h>
#include<string.h>
struct Book 
{
	int bookid;
	char title[20];
	float price;
};
struct Book input()
{
	struct Book b;
	printf("\nenter book id,book title,book price :");
	scanf("%d",&b.bookid);
	fflush(stdin);
	fgets(b.title,20,stdin);
	b.title[strlen(b.title)-1]='\0';
	scanf("%f",&b.price);
	return b;
}
void display(struct Book b)
{
	printf("%d %s %f\n",b.bookid,b.title,b.price);
} 

int main()
{
	struct Book b[5];
	int i;
	for(i=0;i<5;i++)
	{
		b[i]=input();
	}
	
	for(i=0;i<5;i++)
	{
		display(b[i]);
	}
	
}
