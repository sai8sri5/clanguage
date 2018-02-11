#include<stdio.h>
void main()
{
	int freq=0,i;
	char ch,str[100];
	printf("Enter string : ");
	gets(str);
	printf("enter charecter to find frequency : ");
	scanf("%c",&ch);
	for(i=0;str[i]!='\0';i++)
	{
	if(str[i]==ch)
	freq++;
    }
	printf("\n frequency of the charcter %c is %d",ch,freq);
	
}
