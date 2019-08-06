#include<stdio.h>
#include<string.h>
int main ()
{
	int i,j,k;
	int alphabate=0,digits=0,specialchar=0;
	char str[60];
    printf("enter the string :");
	gets(str);
	for(i=0;str[i]!='\0';++i)
	{
		if(('a'<=str[i] && str[i]<='z') || ('A'<=str[i] && str[i]<='Z'))		 
		  alphabate ++;
		
		else if ( ('0'<=str[i] && str[i]<='9'))
		 digits++;
		 
		else   
		  specialchar++;
	}
	
	printf("alphabate :%d \ndigits:%d\n specialchar:%d",alphabate,digits,specialchar);
}
