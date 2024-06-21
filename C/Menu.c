#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
typedef struct student
{
 int eno,fee;
 char sname[20];
}stud;
void addrecord()
{
  FILE *fp;
  stud s1;
  fp=fopen("student.dat","ab");

  printf("\nenter eno");
  scanf("%d",&s1.eno);
  printf("\nenter student name");
  fflush(stdin);
  gets(s1.sname);
  printf("\nenter fee");
  scanf("%d",&s1.fee);
  fwrite(&s1,sizeof(s1),1,fp);
  fclose(fp);
}
void displayall()
{
 FILE *fp;
 stud ss;
 int k,cur;
 fp=fopen("student.dat","rb");
 while(1)
 { cur=ftell(fp);
   printf("starting position is %d",cur);
   k=fread(&ss,sizeof(ss),1,fp);
   if(k==0)
     break;
   printf("\nenrollment no is %d",ss.eno);
   printf("\nstudent name is %s",ss.sname);
   printf("\nstudent fee is %d",ss.fee);
   printf("\n===========================\n");
   cur=ftell(fp);
   printf("\nending position is %d",cur);
   getch();
 }
}

void search()
{
 FILE *fp;
 stud ss;
 int k,eno,f=0;
 fp=fopen("student.dat","rb");
 printf("\nenter eno to be search");
 scanf("%d",&eno);
 while(1)
 {
   k=fread(&ss,sizeof(ss),1,fp);
   if(k==0)
     break;
   if(ss.eno==eno)
   {
    f=1;
    printf("\nenrollment no is %d",ss.eno);
    printf("\nstudent name is %s",ss.sname);
    printf("\nstudent fee is %d",ss.fee);
    printf("\n===========================\n");
    break;
   }
 }
 if(f==0)
   printf("\nrecord not found");
 }


 void delreco()
{
 FILE *fp1,*fp2;
 stud ss;
 int k,eno,f=0;
 fp1=fopen("student.dat","rb");
 fp2=fopen("temp.dat","wb");
 printf("\nenter eno to be delete");
 scanf("%d",&eno);
 while(1)
 {
   k=fread(&ss,sizeof(ss),1,fp1);
   if(k==0)
     break;
   if(ss.eno==eno)
   {
    f=1;
    }
   else
   {
     fwrite(&ss,sizeof(ss),1,fp2);
   }
 }
 if(f==0)
   printf("\nrecord not found");
 else
 {
   fclose(fp1);
   fclose(fp2);
   remove("student.dat");
   rename("temp.dat","student.dat");
 }
 }


void modify()
{
 FILE *fp;
 stud ss;
 int cur,k,eno,f=0;
 char newname[20];
 fp=fopen("student.dat","r+b");
 printf("\nenter eno to be modified");
 scanf("%d",&eno);
 printf("\nenter new name");
 fflush(stdin);
 gets(newname);
 while(1)
 { cur=ftell(fp);
   k=fread(&ss,sizeof(ss),1,fp);
   if(k==0)
     break;
   if(ss.eno==eno)
   {
    f=1;
    strcpy(ss.sname,newname);
    fseek(fp,cur,0);
    fwrite(&ss,sizeof(ss),1,fp);

    break;
   }
 }
 if(f==0)
   printf("\nrecord not found");
 else
  {
  printf("\nrecord modified");
  fclose(fp);
 }
 }


void main()
{
 int choice;
 char x[20];
while(1)
{
 printf("\nmain menu");
 printf("\n1. add record");
 printf("\n2. display all");
 printf("\n3. search record");
 printf("\n4. delete record");
 printf("\n5. modified record");
 printf("\n6. exit");
 printf("\nenter your choice");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1:
  addrecord();

  break;
  case 2:
  displayall();
  break;
  case 3:
   search();
   break;
  case 4:
    delreco();
    break;
  case 5:
    modify();
    break;
  case 6:
    exit(0);
  default:
    printf("\ninvalic choice");
 }
 printf("\ndo u want to cont..press no for exit");
 scanf("%s",x);
 if(strcmpi(x,"no")==0)
   break;

 }
getch();

}