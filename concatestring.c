#include<stdio.h>
#include<string.h>

int main()
{
	char str1[60],str2[60],str3[60];
	int i,j,k;
	
	printf("enter first string:");
	gets(str1);
	printf("enter second string:");
	gets(str2);
	j=0;
	i=0;
    while(str1[i] != '\0')
    {
    	str3[j]=str1[i];
    	++i;
    	j++;
	} 
//	if (str1[i]=='\0')
//	  str3[j++]=" ";
    printf(" ");
    i=0;
	while(str2[i] != '\0')
    {
    	str3[j]=str2[i];
    	++i;
    	j++;
	} 
	printf("\nnew string:");
	puts(str3) ;
	return 0;
		
}
