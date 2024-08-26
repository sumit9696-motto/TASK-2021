// 3 wap to input a 3*3 matrix and print all diagonal elements of matrix
#include<stdio.h>
int main()
{
	int arr[3][3],i,j;
	printf("Enter element of matrix\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}	
		for(j=0;j<=2;j++)
		{
			printf("%d",arr[j][j]);
		}
}
