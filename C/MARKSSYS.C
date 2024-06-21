#include<stdio.h>
#include<ctype.h>
#include<conio.h>

void main()

{
int i,m,p,t=0,d=0,div1=0,div2=0,div3=0,fail=0,rec=0;
char c;
clrscr();
printf("\nX Welcome To Marks Calculator X");

prgm:
{
while(1)
{
	for (i=1;i<=5;)
	{
		printf("\nEnter Marks of Subject %d:",i);
		scanf("%d",&m);
		if(m>100)
		{
			printf("\nIncorrect Marks");
			goto prgm;
		}
		if(m>=75)
			d++;
		t=t+m;
		i++;

	}
		p=t/5;
		printf("\nTotal Marks: %d",t);
		printf("\nPercentage: %d",p);
		t=0;

		if(p>=80 && p<=100)
		{	printf("\nDivision: I");
			div1++;
		}
		if(p>=45 && p<80)
		{	printf("\nDivison: II");
			div2++;
		}
		if(p>=33 && p<45)
		{	printf("\nDivision: III");
			div3++;
		}
		if(p<33)
		{	printf("\nFail");
			fail++;
		}

		printf("\nNumber of Subjects Of Distinction: %d",d);
		d=0;

		rec++;

		cont:
		{
		printf("\nDo you Want To Continue ? (N/Y):");
		fflush(stdin);
		scanf("%c",&c);

		if(c=='Y'|| c=='y')
			goto prgm;
		else if(c=='N' || c=='n')
		{
			printf("\nTotal Number of Records: %d",rec);
			printf("\nTotal Number of I Divisions: %d",div1);
			printf("\nTotal number of II Divisions: %d",div2);
			printf("\nTotal Number of III Divisions: %d",div3);
			printf("\nLudke Hue Students: %d",fail);
			printf("\nX End of Program X");
			printf("\nThanks for Using");
			break;
		}
		else
		{
			printf("Incorrect Choice");
			goto cont;
		}
		}
}
}
getch();
}