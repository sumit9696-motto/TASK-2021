//define udf for defferent arithmetic operation
// 
int add(int n1, int n2);
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two number :");
	scanf("%d%d",&a,&b);
	add(a,b);
}
int add(int n1, int n2)
	{
		
		n1=n1+10;
		n2=n2+10;
		printf("n1 = %d and %d",n1,n2);
		
}
