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
		 	if(freq[i]<freq[min]||freq[min]==0)
		 	{
		 		min=i;
		 		// printf("minimun %d",freq[min]);
			 }
			 }	
	 }
	 printf("minimun  '%c',%d",min,freq[min]);
//	 max=0;
//	 for(i=0;i<allchar;i++)
//	 {
//	 	if(freq[i]>freq[max])
//	 	{
//	 		max=i;
//	 }
//	 }
  //   printf("frequency '%c' %d",max,freq[max]);
	 return 0;

 }
