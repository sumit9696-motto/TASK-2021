// 2 WAP IN C TO  INPUTE TOTAL MONTHLY INCOME OF YOUR FATHER AND PRINT ANNUAL INCOME.
//IF ANNUAL INCOME IS > 100000 THEN ANNUAL IN COME =(MONTHLY INCOME *12)+10%REWARDS OF TOTAL ANNUAL INCOME
//IF ANNUAL INCOME IS LESS THEN 100000 THEN
// ANNUAL INCOME = (MONTHLY INCOME*12)+20% REWARDS

#include<stdio.h>
int main()
{
	int ai,mi,reward;
	printf("enter your monthly income");
	scanf("%d",&mi);
	ai=mi*12;
		if(ai>=100000)
	{
		reward=ai*10/100;
		printf("total salary =%d",ai+reward);
		
	}
		else if(ai>=1 &&ai<=100000)
	{
		reward=ai*20/100;
		printf("total salary =%d",ai+reward);
		
	}
	else{
		{
			printf("you enter a worng value");
		}
	}
}
