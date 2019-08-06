

#include<stdio.h>
  
  void rotatebyone( int arr[],int n)
  {
  	int l,i;
  	l=arr[0];
  	
  	for(i=0;i<n-1;i++)
  	{
  		arr[i]=arr[i+1];
	}
	arr[n-1]=l;
  }
int main()
{
	int i,j,k,l,n,p,arr[20],temp[20];
	printf("enter the elements of array :");
	scanf("%d",&n);
	printf("\nenter the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);		
	}
    printf("enter the number from you want to left rortate:");
	scanf("%d",&p);
	for(i=p;i>0;i--)
	{
		rotatebyone(arr,n);
	}
	for(i=0;i<n;i++)
	{
		printf("....%d",arr[i]);
	}
} 
