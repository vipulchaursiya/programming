#include<stdio.h>
#include<string.h>

int main()
{
	int i, count=0;
	char str[60];
	printf("enter the string:");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
	   if(str[i]==32|| str[i]=='\n' || str[i]=='\t')
	    count++;
	}
	printf("..%d",count);
}
