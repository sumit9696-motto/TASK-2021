// wap to check a given character is vowel or consonent
#include<stdio.h>
int main()
{
	char ch;
	printf("enter:");
	scanf("%c",&ch);
	if(ch=='a' || ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A' || ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{printf("vowel");
	
	}
	else if ((ch>='a'&&ch<='z')||(ch>='A' && ch<='Z'))
	{
		printf("consonent");
		
	}
	else{
		printf("enter a character ")
	}
}
