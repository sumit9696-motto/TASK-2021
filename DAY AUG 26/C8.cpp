// WAP TO INPUT 3 SUBJECT MARK OF STUDENTAND CALCULTE PERCENTEG PER>70=WELLDONE OTERWISEFOCUSEON THE STUDY


#include<stdio.h>
int main()
{
	int a,b,c,per;
	printf("enter  1st subject mark :");
	scanf("%d",&a);
	printf("enter  2nd subject mark :");
	scanf("%d",&b);
	printf("enter  3rd subject mark :");
	scanf("%d",&c);
	per=((a+b+c)*100)/300;
	if(per>=70)
	{
	printf("WELLDONE  ");
	}
	else{
		printf("FOCUSE ON THE STUDY");
	}
}
