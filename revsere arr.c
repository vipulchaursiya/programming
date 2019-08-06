#include<stdio.h>

int main()
{
	int i,j,n,arr[20],temp[20];
	printf("enter the elements of array :");
	scanf("%d",&n);
	printf("\nenter the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);		
	}
	j=0;
	for(i=n;i>=0;i--)
    {
    	temp[j++]=arr[i];
    	
	}
	printf("\nreverse array :",j);
	
	
	for(i=1;i<j;i++)
	{
		printf("  %d",temp[i]);
	}
	
}
