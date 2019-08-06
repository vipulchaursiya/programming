#include<stdio.h>
#include<string.h>

int main()
{
	int i,j ,k;
	char str[60];
	printf("enter the string:");
	gets(str);
    for(i=0;str[i]!='\0';++i)
	{
		if( 'a'<=str[i] && str[i]<='z')
	      
		  str[i]=str[i]-32;	
		
		  
	
	      
	}	
	puts(str);
	return 0;
}
