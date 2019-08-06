#include<stdio.h>

int main()
{
	int i,j,n,arr[20],el,p,temp;
	printf("enter the numbers of elements of array:");
	scanf("%d",&n);
	printf("enter elememts of Array:");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=n;i++)
	{
		printf("....%d",arr[i]);
	}
	printf("\nposition where you want to insert:");
	scanf("%d",&p);
	printf("\nenter the number :");
	scanf("%d",&el);
	
     for(i=n;i>=p;i--)
     {
     	arr[i]=arr[i-1];  
		     	
	 }
	 arr[p-1]=el;
	 n++;
	 
     
	
	for(i=0;i<=n;i++)
	{
		printf("..%d",arr[i]);
	}
	return 0;
}
