#include<stdio.h>
void main()
{
int eng,hin,mat,sci,com,tm,per;
clrscr();
printf("Enter your marks: ");
scanf("%d %d %d %d %d",&eng,&hin,&mat,&sci,&com);
tm=eng+hin+mat+sci+com;
per=tm/5;
printf("\n Your Total Marks are: %d",tm);
printf("\n Your Percentage is: %d",per);
getch();
}