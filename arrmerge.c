#include<stdio.h>

int main()
{
	int i,j,n,arr[20],temp[20];
	printf("enter the numbers of elements of array:");
	scanf("%d",&n);
	printf("enter elememts of Array:");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	i=0;
	for(j=0;j<=n;j++)
	{
		
		temp[j]=arr[i];
		i++;
	}
	for(i=0;i<=n;i++)
	{
		printf("..%d",temp[i]);
	}
	return 0;
}
