//wap to count all numbers divisible by 3 and numbers divisible by 5 within 1 to 50 
//


#include<stdio.h>
int main()
{
	int i,pos=0,neg=0,n, zero=0;
	

	for(i=1;i<=50;i++)
	{
		
		if(n%3==0)
		
		pos=pos+1;
		
		
	else if (n%5==0)
	neg=neg+1;
	else
	zero=zero+1;
	
	}
		printf("total divisiable by 3=%dand total divisiable by 5=%d and total zero=%d",pos,neg,zero);
}
