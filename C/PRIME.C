#include<stdio.h>
#include<ctype.h>
void main()
{
int i,a,p=0;
clrscr();
printf("Enter any Number:");
scanf("%d",&a);
for(i=2;i<a/2;i++)
{
	if(a%i==0)
		p=1;
		break;
}
if(p==0)
	printf("Number is Prime");
else
	printf("Number is Not Prime");

getch();
}
