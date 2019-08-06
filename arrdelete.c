#include<stdio.h>

int main()
{
	int arr[20],i,j,p,n,num;
	printf("enter the numbers of elements of the array:");
	scanf("%d",&n);
	printf("\nenter the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	 printf("\nenter the postion of the element of the array:");
	 scanf("%d",&p);

	
			for(i=p-1;i<n-1;i++)
         	{
			arr[i]=arr[i+1];
		   }
		   n--;
		
		

	for(i=0;i<=n;i++)
	{
	    printf("...%d",arr[i]);
	}
	
	
	
}
