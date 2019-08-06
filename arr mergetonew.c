#include<stdio.h>
int main()
{
	int arr1[100], arr2[100],temp[100];
    int n1,n2, i, j,k, count;
	printf("enter the numbers of elements 1st of array:");
	scanf("%d",&n1);
	printf("enter elememts of  1st Array:");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("enter the numbers of elements 2nd of array:");
	scanf("%d",&n2);
	printf("enter elememts of 2nd Array:");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&arr2[i]);
	}
	k=0;
	for(i=0;i<n1;i++)
	{
		count++;
		temp[k++]=arr1[i];
		if(i==(n1-1))
		{
		   	for(i=0;i<n2;i++)
			{
			  temp[k++]=arr2[i];
			  count++;
	     	} 	
		}
      
	}
//	printf("k==%d",count);
   printf("\n merge array :");
	for(i=0;i<k;i++)
	{
		printf("..%d",temp[i]);
	}
	
	
}
