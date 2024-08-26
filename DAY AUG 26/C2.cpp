//WAP to convert fahrenhite value to the centigrate


#include<stdio.h>
int main()

{float c,f;
printf("enter faherenhite");
scanf("%f",&f);
c=(f-32)/1.8;
c<20?printf("IT IS VERY COLD %f centigrate",c):printf("SUMMER SESSION %f centigrate",c);
}
