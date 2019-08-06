#include<stdio.h>
#define  ar 1000


 
 int main()
 {
 	int i,j,min,swap,n;
 	int arr[ar];
 	printf("enter the  number of values:");
 	scanf("%d",&n);
 		printf("enter the  numbers:");
 		 for(i=0;i<=n-1;i++)
 		 {
 		 	scanf("%d",&arr[i]);
		 }
	
	 

   for(i=0;i<=n-1;i++)
   {
   		min =i;
   	for(j=i+1;j<=n-1;j++)
   	{
   		if(arr[j]<arr[min])
   		{    
   		  	min=j;   		  	
   		}
   	}   	
	     	swap=arr;
		   	arr[i]=arr[min];
		    arr[min]=swap;  
		  
	 
   }
   for(i=0;i<=n-1;i++){
   	printf("..%d",arr[i]);
   }
		 
  
		 
 return 0;
 }
