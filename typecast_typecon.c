
#include<stdio.h>
void main()
{
	int i;
	char c;
	float f;
	printf("Enter charcter,integer & floating value : ");
	scanf("%c%d%f",&c,&i,&f);
	printf("float to int conversion : %d\n",(int)f);
	printf("int to float conversion : %f\n",(float)i);
	printf("char to int conversion : %d\n",c);
	printf("int to char conversion : %c\n",(char)i);
	
}
