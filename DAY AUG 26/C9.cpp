// WAP TO I/P MONTHLY INCOMWE AND PRINTF ANNUAL INCOME
//ANNUAL =MI*12+REWARD
//ANNUAL INCOME : 1-100000: 10%
//100001-500000: 20%
//>5000000:25%
#include<stdio.h>
int main()
{
	int mi,ai,reward;
	printf("enter monthly income");
	scanf("%d",&mi);
	ai=mi*12;
	if(ai>=1 &&ai<=100000)
	{
		reward=ai*10/100;
		printf("total salary =%d",ai+reward);
		
	}
		else if(ai>=100001 &&ai<=500000)
	{
		reward=ai*20/100;
		printf("total salary =%d",ai+reward);
		
	}
		 else if(ai>=500000 )
	{
		reward=ai*25/100;
		printf("total salary =%d",ai+reward);
		
	}
	else{
		{
			printf("you enter a worng value");
		}
	}
}
