
#include<stdio.h>
void main()
{
	int age;
	A:printf("Enter the age : ");
	scanf("%d",&age);
	if(age>18&&age<30)
	{
		printf("Your age is : %d\n",age);
		goto A;
	}
	else
	printf("you entered age(%d) is invaild \n",age);
}
