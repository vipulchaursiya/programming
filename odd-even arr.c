#include<stdio.h>

int main()
{
	int i,k,j,n,arr[20],temp1[20],temp2[20];
	printf("enter the elements of array :");
	scanf("%d",&n);
	printf("\nenter the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);		
	}
	j=0;
	k=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		 {
		 	temp1[j++]=arr[i];
		 }
		 else
		 temp2[k++]=arr[i];		
	}
	printf("\neven");
	for(i=0;i<j;i++)
	{
		printf("....%d",temp1[i]);		
	}
	printf("\nodd");
	for(i=0;i<k;i++)
	{
		printf("....%d",temp2[i]);		
	}
	
}
