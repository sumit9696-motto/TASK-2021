// wap  to input valuue of a and find result of following statements.
#include<stdio.h>
int main()
{
	int a=10,b;
	b=a++ + a++ + --a;
	printf("b=a++ +a++ +--a=%d",b);
	a=10;
	b=++a + a-- + a++;
	printf("b=++a + a-- + a++;=%d",b);
	a=10;
	b=++a + a++ + a++ + ++a;
	printf("	b=++a + a++ + a++ + ++a=%d",b);
 } 
