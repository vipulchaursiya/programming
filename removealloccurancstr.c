#include<stdio.h>

 int main()
 {
 	int i,j,k,max,ascii,min;
 	char str[100],c;
 	printf("enter the string:");
 	gets(str);
 	printf("enter the word you want to remove:");
 	scanf("%c",&c);
    while(str[i]!='\0')
	{i++;}
	k=i;
	for(i=0;i<k;i++)
	{
      if (str[i]==c)
	    {
	      for(j=i;j<k;j++)
		  {
		  	str[j]=str[j+1];
			  }	
			k--;  
		
		 } 
		
	}

	
 
   for(i=0;i<k;i++) 
    {
	   printf("%c",str[i]);
	}
}
	
	
	
   
