#include<stdio.h>
void main()
{
int age;
char name[30],address[30];
float height;
printf("\nenter name address age and height");
scanf("%s%s%d%f",name,address,&age,&height);
printf("\n name is %s",name);
printf("\n address is %s",address);
printf("\n age is %d",age);
printf("\n height is %f",height);
}
