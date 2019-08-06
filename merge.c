#include<stdio.h>

void merge(int arr[],int s ,int e)
{
	int mid=(s+e)/2;
	
	int i=s;
	int j=mid+1;
	int k=s;
	
	int temp[100];
	
	while( (i<=mid) && (j<=e))
	{
		if(arr[i]<arr[j])
		  temp[k++]=arr[i++];
		else
		   temp[k++]=arr[j++];  
	}
	while(i<=mid)
	{
		temp[k++]=arr[i++];
	}
	while(j<=e)
	
	{
		temp[k++]=arr[j++];
	}
	for(i=s;i<=e;i++)
	{
		arr[i]=temp[i];
	}
}

void mergesort(int arr[],int s,int e)
{
	if(s>=e)
	return;
	
	int m=(s+e)/2;
    merge(arr,s,m);
    mergesort(arr,m+1,e);
	
	
	merge(arr,s,e);
}

int main ()
{
	int arr[40],i,n,j,s,e;
	printf("enter the numbers of elements :");
	scanf("%d",&n);
	printf("enter the elements:");
	for (i=0;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	mergesort(arr,0,n-1);
	
	for (i=0;i<=n;i++)
	{
		printf("...%d",arr[i]);
	}
	
	
}
