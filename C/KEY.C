#include<stdio.h>
void main()
{
char a;
clrscr();
printf("\n Press any key");
fflush(stdin);
scanf("%c",&a);
if(a>='0' && a<='0')
	printf("\n Number");
else if(a>='a'&& a<='z')
	printf("\n Allphabet");
else
	printf("\n Symbol");
getch();
}