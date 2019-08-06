#include<stdio.h>

int main()
{
	int i,d,n,arr[20],key=0,t;
	printf("enter the total number of array:");
	scanf("%d",&n);
	printf("enter the array elements:");
	for (i=0;i<=n-1;i++)
	{
		scanf("%d",&arr[i]);
	}
    
	 for(i=1;i<=n-1;i++)
	 {	   
	   d=i;
	   while ((d>0) && (arr[d-1]>arr[d]))
	   {
	   	t=arr[d];
	   	arr[d]=arr[d-1];
	   	arr[d-1]=t;	   	 
	   }
	   d--;
	 } 
	 for(i=1;i<=n-1;i++)
	 {
	 	printf("...%d",arr[i]);
	 }
	 return 0;
	 getch();
}

