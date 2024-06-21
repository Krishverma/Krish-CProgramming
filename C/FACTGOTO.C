#include<stdio.h>
#include<ctype.h>
void main()
{
long int n,i=1,p=1;
clrscr();
printf("\nEnter number:");
scanf("%ld",&n);

a1:
p=p*i;
i++;
if(i<=n)
goto a1;

printf("\nFactorial of numberc is: %ld",p);
getch();
}
