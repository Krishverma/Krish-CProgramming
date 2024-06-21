#include<stdio.h>
void main()
{
int a;
clrscr();
printf("Enter any Number:");
scanf("%d",&a);
if(a%2==0)
	printf("\n Square of Number: %d",a*a);
else
	printf("\n Cube of Number: %d",a*a*a);
getch();
}
