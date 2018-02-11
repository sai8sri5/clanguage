#include<stdio.h>
void main()
{
int m,hr,time;
clrscr();
printf("enetr hour and min:");
scanf("%d%d",&hr,&m);
time=(hr*60)+m;
printf("%dm",time);
}