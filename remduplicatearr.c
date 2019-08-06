#include<stdio.h>
int main()
{
	   int arr[100], freq[100];
    int n, i, j,k, count;
	printf("enter the numbers of elements of array:");
	scanf("%d",&n);
	printf("enter elememts of Array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
			   	for(k=j;k<n;k++)
               	{
		       	  arr[k]=arr[k+1];
		        }
				n--	;
				j--;//if shifting of alements of arry occurs then remove the j							
			}			
		}	 
	}  
    		for(i=0;i<n;i++)
	{
		printf("...%d",arr[i]);
	}
}
