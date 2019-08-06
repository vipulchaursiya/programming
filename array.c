#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n,arr[20],key=0;
	printf("enter the total number of array:");
	scanf("%d",&n);
	prinf("enter the array elements:");
	for (i-0;i<=n-1;i++)
	{
		scanf("%d",&arr[i]);
	}
    
	 for(i=1;i<=n-1;i++)
	 {
	     key=arr[i];
	 	  j=i-1;
	 	while((j>0) && (arr[j]>key))
	 	{
	 		arr[j+1]=arr[j];
	 		j=j-1;
		 }
		 arr[j+1]= key;
	 }	
	 for(i=0;i<=n-1;i++)
	 {
	 	printf("..%d",arr[i]);
	 }
	 return 0;
	}

