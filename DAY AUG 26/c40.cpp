//
// 

#include<stdio.h>
int main()
{
	int num,*p;
	num=10;
	printf("memory : %d",&num);
	p=&num;
		printf("\n memory : %d",&p);
	printf("\nmemory : %d",*p);
*p=*p+20;
		printf("\n memory : %d",num);

}
