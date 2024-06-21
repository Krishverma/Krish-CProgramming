#include<stdio.h>
#include<ctype.h>
void main()
{
char x,a,b,c,d,e;
int i;
clrscr();
printf("\nX Welcome To Login Portal X");
printf("\nEnter Your 5 Character Password:");
for(i=1;i>=5;i++)
{
	x=getch();
	if(i==1)
		x=a;
	else if(i==2)
		x=b;
	else if(i==3)
		x=c;
	else if(i==4)
		x=d;
	else
		x=e;
	x=(x-x)+42;
	printf("x");
	getche();
}
if(a=='K'&&b=='r'&&c=='i'&&d=='s'&&e=='h')
{
	printf("Access Granted");
	printf("Files Unlocked");
}
else
{
	printf("Access Denied");
	printf("Incorect Password");
}
getch();
}






