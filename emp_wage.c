#include<stdio.h>
void main()
{
	int hrs;
	int wage;
	printf("Enter no of hours an employee worked in a week: ");
	scanf("%d",&hrs);
	printf("enter hourly wage");
	scanf("%d",&wage);
	printf("employees weekly pay is %d",hrs*wage);
}
