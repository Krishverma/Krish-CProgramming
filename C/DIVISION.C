#include<stdio.h>
void main()
{
int a;
clrscr();
printf("Enter Your Percentage:");
scanf("%d",&a);
if(a>100)
	printf("Incorrect Percentage");

else if(a>=80 && a<=100)
	printf("(I) First Division");

else if(a>=45 && a<80)
	printf("(II) Second Division");

else if(a>=33 && a<45)
	printf("(III) Third Division");

else
	printf("(F) Fail");

getch();
}