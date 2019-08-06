#include<stdio.h>

int main()
{
	int i,j,n,count=1;
	 
	 for(i=1;i<6;i++)
	 {
	 	
	 	for(j=1;j<6;j++)
	 	{
	 	    if(i==j)
	 		count =1; 
	 		if(j<i)
	 		 printf(" ");	 		
	 		else 
	 		 printf("%d",count);
			  count++;			   
		
							    
     	}
	    
		 printf("\n");	 
	 }
	
	return 0;
}
