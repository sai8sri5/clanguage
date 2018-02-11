#include<stdio.h>
void main()
{
int m,hr,time;
clrscr();
printf("enetr time value:");
scanf("%d",&time);
m=time%60;
hr=(time-m)/60;
printf("%dhr and %dm",hr,m);
}