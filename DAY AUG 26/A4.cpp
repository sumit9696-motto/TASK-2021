/*wap to pattern
7 7 7 7 7
6 6 6 6
5 5 5 
4 4 
3
*/
#include<stdio.h>
int main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",i+2);
		}
		printf("\n");
	}	
}
