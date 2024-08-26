//wap to inpute 10 numbers from user and count total number of
//negative and positive value


#include<stdio.h>
int main()
{
	int i,pos=0,neg=0,n, zero=0;
	printf("enter 5 numbers:");

	for(i=1;i<=10;i++)
	{
		scanf("%d",&n);
		if(n>0)
		
		pos=pos+1;
		
		
	else if (n<0)
	neg=neg+1;
	else
	zero=zero+1;
	
	}
		printf("totalpositiv=%dand total negatavie=%d and total zero=%d",pos,neg,zero);
}
