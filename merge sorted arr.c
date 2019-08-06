#include<stdio.h>
#include<conio.h>
int main()
{
	int arr1[10], arr2[10],temp[20];
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
	while((n1!=0) && (n2!=0))
	{
		if(arr1[i]>arr2[i])
		{ 
		   temp[k++]=arr2[i];
		   i++;
		}
		else 
		{
		 temp[k++]=arr1[i];
		 i++;	
		}
	}
	for(k=0;k<n1+n2;k++)
	{
		printf("..%d",temp[k]);
	}
	
}

	
