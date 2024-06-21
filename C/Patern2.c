#include<stdio.h>
#include<ctype.h>
#include<conio.h>
void main()
{
int n,i,j,r;
intf("\nEnter any number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	for(j=n;j<=i;j--)
	{
		if(j=1 || j>=i)
		printf(" %d",j);	
		else
		printf(" ");
	}	
	printf("\n");
}
getch();
}
