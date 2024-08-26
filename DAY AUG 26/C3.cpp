//WAP to input 5 subject marks and calculate percentage


#include<stdio.h>
int main()

{float a,b,c,d,e,per;
printf("enter 1st subject mark");
scanf("%f",&a);
printf("enter 2nd subject mark");
scanf("%f",&b);
printf("enter 3rd subject mark");
scanf("%f",&c);
printf("enter 4th subject mark");
scanf("%f",&d);
printf("enter 5th subject mark");
scanf("%f",&e);
per=((a+b+c+d+e)*100)/500;
c>70?printf("YOU ARE DOING WELL %f percentage",per):printf("plz focus on study %f percentage ",per);
}
