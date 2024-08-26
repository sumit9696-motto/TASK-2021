// wap to input the strint and print each character in new line 

#include<stdio.h>
int main()
{
	char name[30],i;
	printf("enter yourr name ");
	
	gets(name);
	for(i=0;name[i]!='\0';i++)
	{
			printf("%c",name[i]);
				printf("\n");
	}

}
