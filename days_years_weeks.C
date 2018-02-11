#include<stdio.h>
void main()
{
int d,y,w;
clrscr();
printf("enter no of days:");
scanf("%d",&d);
y=d/365;
w=(d%365)/7;
d=d-((y*365)+(w*7));
printf("\n%dyears",y);
printf("\n%dweeks",w);
printf("\n%ddays",d);
}
