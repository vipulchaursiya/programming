#include<stdio.h>


int main()
{
	   int arr[100], freq[100];
    int n, i, j, count;
	printf("enter the numbers of elements of array:");
	scanf("%d",&n);
	printf("enter elememts of Array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		freq[i]=-1;
	}
	for (i=0;i<n;i++)
    {
    	count =1;
        for(j=i+1;j<n;j++)
        {
        	if(arr[i]==arr[j])
        	{
        		count++;
        		freq[j]=0;
			}
			
		}
		if (freq[i]!=0)
		{
			freq[i]=count;
		}
	}
	for(i=0;i< n;i++)
	{
		if(freq[i] ==1)
		{
		
		printf("\n unique number %d ",arr[i]);
		}
	}
	
	
}
