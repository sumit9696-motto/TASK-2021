//wap to define user- defined data type by using structure
#include<stdio.h>
struct book {
	float price;
	char aname[30];
	int pages;
};
int main ()
{
	struct book b1;
	printf("enter prise of 1st book");
	scanf("%f",b1.price);
	printf("enter author of 1st book");
	gets(b1.aname);
		printf("enter number of pages of 1st book");
scanf("%d",b1.pages);
printf("name=%s, number of pages=%d,prise of book=%f",b1.aname,b1.pages,b1.price);
}
