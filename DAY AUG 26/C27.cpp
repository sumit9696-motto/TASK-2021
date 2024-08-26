//WAP TO ENTER 5 NUMBERS AND FINDES SUM OF NUMBERS


#include<stdio.h>
int main()
{
	int i,count=0,n;
	printf("enter 5 numbers:");

	for(i=1;i<=5;i++)
	{
		scanf("%d",&n);
		count=count+n;
	
	
	}
		printf("total=%d",count);
}
