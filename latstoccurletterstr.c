#include<stdio.h>
#include<string.h>

int main()
{
	int i,s,l,length,strind,revind ,count=0;
	char reverse[60] ,str[60];
	printf("enter the string:");
	gets(str);
	printf("enter the character you want to serch: ");
	s=getchar();
	for(i=0;str[i]!='\0';i++)
    { }
    l=i;
    while(l!=0)
    {
    	if(str[l]==s)
    	{
    		printf("position %d",i-l);
    		break;
		}
		l--;
	}
}
