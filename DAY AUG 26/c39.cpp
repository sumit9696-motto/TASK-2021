// wap to input email address  and chack this is valid or not


#include<stdio.h>
int main()
{
	char email[50];
	int i,at=0,dot=0;
	printf("enter yourr email address : ");
	
	gets(email);
	for(i=0;email[i]!='\0';i++)
	{
		if (email[i]=='@')
		at=at+1;
		else if (email[i]=='.')
		dot=dot+1;

}
	if(dot==0 || at==0)
	printf("email is invalid");
	
	else
	printf("@ of this email address =%d . is this email address =%d ",at,dot);
				printf("\n");
	}
