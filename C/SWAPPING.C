#include<stdio.h>
void main()
{
int a,b;
clrscr();
printf("Enter any two numbers:");
scanf("%d %d",&a,&b);
printf("\n Numbers before swapping: %d and %d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\n Numbers after swapping: %d and %d",a,b);
getch();
}