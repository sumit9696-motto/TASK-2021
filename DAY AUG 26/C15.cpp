// 6 WAP TO I/P TOTAL SHOPPING aMOUNT AND CALCULATE NET AMOUNT TO PAY 
//IF AMOUNT IS >0<=1000 THEN 100RS DELIVERY CHARGE AND 10%GST
//ANNUAL INCOME : 1-100000: 10%
//>1000<=10000: 18% 50RS DELIVERY CHARGE
//>100000:25% 0RS DELIVERY CHARGE
#include<stdio.h>
int main()
{
	int am,delivery,GST;
	printf("enter total amount");
	scanf("%d",&am);
	
	if(am>0 &&am<=1000)
	{
		GST=am*10/100;
		delivery=100;
		printf("total amount =%d",am+delivery+GST);
		
	}
		else if(am>1000 &&am<=10000)
	{
		GST=am*18/100;
		delivery=50;
		printf("total amount =%d",am+delivery+GST);
		
	}
		 else if(am>10000 )
	{
	GST=am*20/100;
		delivery=0;
		printf("total amount =%d",am+delivery+GST);
		
	}
	else{
		{
			printf("you enter a worng value");
		}
	}
}
