#include<stdio.h>
#include<string.h>

int main()
{
	int i,k,j,length,strind,revind ,count=0;
	char reverse[60] ,str[60],s;
	printf("enter the string:");
	gets(str);
	printf("enter the character you want to serch: ");
	s=getchar();
	for(i=1;str[i]!='\0';++i)
    {
	   if(str[i]==s)
	   {
	   	printf(" position %d",i+1);
	   
	   }  

  	}
}
