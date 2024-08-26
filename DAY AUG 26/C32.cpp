//wap to find factorial of a given number
#include<stdio.h>
int main()
{
	int i=1,n,mul=1;
	printf("enter a value to find factorial :");
	scanf("%d",&n);
	
while(i<=n)
{
	mul=mul*i;
	i=i+1;
}
printf("factorial of %d is %d",n,mul);
}
