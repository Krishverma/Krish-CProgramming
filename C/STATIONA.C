#include<stdio.h>
void main()
{
int p,e,n,gb,d,nb;
clrscr();
printf("Enter Number of pencils, erasers and notebooks:");
scanf("%d %d %d",&p,&e,&n);
gb=(p*15)+(e*5)+(n*40);
d=gb/10;
nb=gb-d;
printf("\n Your Gross Bill is: %d",gb);
printf("\n Discount Applicable is: %d",d);
printf("\n Net Bill Amount is: %d",nb);
getch();
}