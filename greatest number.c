
#include<stdio.h>
void main()
{
	int n,i,sum=0,max=0,a;
	printf("Enter how many numbers you want to enter : ");
	scanf("%d",&n);
	printf("Enter the numbers : ");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a);
 	sum=sum+a;
    if(a>max)
    max=a;
	}
	printf("Sum of the given digits : %d\n",sum);
	printf("largest number among given digits : %d\n",max);
	
}
