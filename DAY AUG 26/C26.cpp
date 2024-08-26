// wap to cont all values that is divisible by 3 within 1 to 40

#include<stdio.h>
int main()
{
	int i,count=0;
	for(i=1;i<=40;i++)
	{
	if(i%3==0)
	count=count+1;
	
	
	}
		printf("divisible=%d",count);
}
