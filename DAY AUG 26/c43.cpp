// wap to execute withdrawal and deposit operations of a bank by using UDF

// 
int withdraw(int amount);
#include<stdio.h>
int main()
{
	int amount,ch;
	printf("enter total amount present in ypur account :");
	scanf("%d",&amount);
	printf("enter 1 to withdrawal and enter 2 to deposit :");
		scanf("%d",&ch);
		if(ch==1)
		{withdram(&amount);
		printf("remaining amount" = %d,amount);
			}
		else if (ch==2)
		{withdram(&amount);
		printf("remaining amount" = %d,amount);
			}
	

}
int withdraw(int *amount)

	{
		
		int damt;
		printf("enter amount to deposit : %d");
		scanf("%d",&deposit);
		*amount=*amount+deposit;
		
}
