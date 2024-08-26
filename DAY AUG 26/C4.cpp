//  WAP TO SWAP TWO NUMBER
#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("enter two number :");
	scanf("%d%d",&n1,&n2);
	n3=n2;
	n2=n1;
	n1=n3;
	printf("after swaping n1= %d and n2=%d ",n1,n2);
}
