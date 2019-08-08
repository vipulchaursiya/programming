#include<stdio.h>
#define allchar 256 
 int main()
 {
 	int i,j,k,freq[allchar],max,ascii,min;
 	char str[1000];
 	printf("enter the string:");
 	gets(str);
 	for(i=0;i<allchar;i++)
 	{
 		freq[i]=0;
	 }
	 i=0; 
 	while(str[i]!='\0')
 	{
 		ascii =(int)str[i];
 		freq[ascii]++;
 		i++;
	 }
     
     min =0;
     for(i=0;i<allchar;i++)
     {
         if(freq[i]!=0)
		 {
		   if((i<'z'&&i>'a')||(i>'A'&&i<'Z') )	
		   printf("frequnecy of '%c' is %d\n",i,freq[i]);
		 }	 	
		
	   }
	 

	 return 0;

 }
