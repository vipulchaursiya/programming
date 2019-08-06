#include<stdio.h>

int main()
{
	int i,j,n,arr[10],freq[10],count,m=0;
	printf("enter the number of the elemets of the array:");
    scanf("%d",&n);
	printf("\nenter the elements of the array:");	
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
    	freq[i]=-1;
	}
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{			
			 count++;
			 freq[j]=0;
	     	}
		}
		if(freq[i]!=0)
		{
		   freq[i]=count;	
		}
	}
		
		for(i=0;i<n;i++)
		{
			if(freq[i] !=0)
			{				
			//	printf("..%d..%d",arr[i],freq[i]);
				if(freq[i]>1)
				m++;
			}
		}
		printf("\n total duplicate number in this  array %d",m);
	
	return 0;
}
