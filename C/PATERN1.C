#include<stdio.h>
#include<ctype.h>
#include<conio.h>
void main()
{
int n,i,j,r;
clrscr();
printf("\nEnter any number:");
scanf("%d",&n);
r=2*n-1;
for(i=1;i<=r;i++)
{
for(j=1;j<=i;)
{
if(j<=n)
{
printf(" %d",j);
j++;
}
}
printf("\n");
}
getch();
}

