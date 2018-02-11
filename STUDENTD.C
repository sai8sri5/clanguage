#include<stdio.h>
void details();
void aggregate();
void intrest();
void show();
char hobb[10],areofint[10];
char name[10],email_id[10];
int age,phone_no;
int ssc,inter,sem1,sem2,sem3,total,tolagg;
void main()
{
clrscr();
printf("---------Enter specific details of student----------" );
details();
aggregate();
intrest();
printf("\n ****** student's info******");
show();
getch();
}
void details()
{
//char name[10],email_id[10];
//int age[10],phone_no[10];
printf("\n enter student name:");
scanf("%s",name);
printf("\n enter age:");
scanf("%d",&age);
printf("\n enter email_id:");
scanf("%s",email_id);
printf("\n enter phone number:");
scanf("%d",&phone_no);
}
void aggregate()
{
//int ssc[10],inter[10],sem1[10],sem2[2],sem3[3],total,tolagg;
printf("\n enter ssc marks:");
scanf("%d",&ssc);
printf("\n enter inter marks:");
scanf("%d",&inter);
printf("\n enter sem1 marks:");
scanf("%d",&sem1);
printf("\n enter sem2 marks:");
scanf("%d",&sem2);
printf("\n enter sem3 marks:");
scanf("%d",&sem3);
total=(ssc+inter);
tolagg=(sem1+sem2+sem3)/3;
}
void intrest()
{
//char hobb[10],areofint[10];
printf("\n enter your hobbies:");
scanf("%s",hobb);
printf("\n enter your area of intrest:");
scanf("%s",areofint);
}
void show()
{
int choice,ch;
do
{
printf("\n1.details\n2.aggregate\n3.intrest\n4.exit");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("\n name is %s",name);
       printf("\n age is %d",age);
       printf("\n email_id is %s",email_id);
       printf("\n phone_no is%d",phone_no);
       break;

case 2:  printf("\n ssc marks are %d",ssc);
	 printf("\n inter marks are %d",inter);
	 printf("\n ssc and inter total is%d",total);
	 printf("\n total sem aggregate is %d",tolagg);
	 break;

case 3:  printf("\n hobbies are %s",hobb);
	 printf("\n area of intrest is %s ",areofint);
	 break;
case 4:exit(0);
       }
       printf("\n do you want to know more info");
       scanf("%d",&ch);
       }while(ch==1);
       }









