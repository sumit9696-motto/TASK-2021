//wap to inpute 5 numbers from user and count total number of
//negative and positive value


#include<stdio.h>
int main()
{
	int i,pos=0,neg=0,n;
	printf("enter 5 numbers:");

	for(i=1;i<=5;i++)
	{
		scanf("%d",&n);
		if(n>0)
		
		pos=pos+1;
		
		
	else if (n<0)
	neg=neg+1;
	
	
	}
		printf("totalpositiv=%dand total negatavie=%d",pos,neg);
}
