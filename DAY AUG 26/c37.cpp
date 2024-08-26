// wap to ask of the user and print name of user with hello
#include<stdio.h>
int main()
{
	char name [30];
	printf("enter yourr name ");
	//scanf("%s",&name);
	gets(name);
	printf("hello %s",name);
}
