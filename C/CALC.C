void main()
{
int a,b,c;
char o;
clrscr();
printf("Enter two Numbers:");
scanf("%d %d",&a,&b);
printf("\n Enter Operator:");
fflush(stdin);
scanf("%c",&o);

if(o=='+')
{
	c=a+b;
	printf("Sum of Numbers: %d",c);
}
else if(o=='-')
{
	c=a-b;
	printf("Difference of Numbers: %d",c);
}
else if(o=='*')
{
	c=a*b;
	printf("Product of Numbers: %d",c);
}
else if(o=='/')
{
	c=a/b;
	printf("Quotient of Numbers: %d",c);
}
else
	printf("Choose from + , - , * , /");
getch();
}
