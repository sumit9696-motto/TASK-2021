// WAP TO INPUT 10 element of array and find sum of all element
#include<stdio.h>
int main()
{
	int arr[10],i,sum=0;
	printf("enter 10  element of array :");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	for(i=0;i<=9;i++)
	{sum=sum+arr[i];
	}
	printf("sum of all numbers=%d",sum);
}
