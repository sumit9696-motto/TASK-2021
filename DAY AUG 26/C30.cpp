//wap to enter 10 number and count how many odd and how many even values are their 
//


#include<stdio.h>
int main()
{
	int i,even=0,odd=0,n, zero=0;
	printf("enter 5 numbers:");

	for(i=1;i<=10;i++)
	{
		scanf("%d",&n);
		if(n%2==0)
		
		even=even+1;
		
		
	else if (n%2!=0)
	odd=odd+1;
	else
	zero=zero+1;
	
	}
		printf("totalpositiv=%dand total negatavie=%d and total zero=%d",even,odd,zero);
}
