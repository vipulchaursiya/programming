#include<stdio.h>

int main()
{
	int i,j,n,num,arr[20],temp[20];
	printf("enter the elements of array :");
	scanf("%d",&n);
	printf("\nenter the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);		
	}
    printf("\nenter the element you want to search:");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
    	if(arr[i]==num)
    	{
    		j=i+1;
		}
	}
	printf("element %d position is:%d ",num ,j);
}
