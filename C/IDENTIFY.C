#include<stdio.h>
void main()
{
char a;
clrscr();
printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\tPress Any Key");
scanf("%c",&a);
clrscr();
if(a=='1'||a=='2'||a=='3'||a=='4'||a=='5'||a=='6'||a=='7'||a=='8'||a=='9'||a=='0')
	printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\tThe Key Pressed is a Num Key");

else if(a=='`'||a=='-'||a=='='||a=='['||a==']'||a==';'||a==','||a=='.'||a=='/')
	printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\tThe Key Pressed is a Symbol Key");

else
	printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\tThe Key Pressed is an Alphabet Key");
getch();
}


