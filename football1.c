#include<stdio.h>
#include<math.h>
int main ()
{
	int n,i,j,k, max,g[n],f[n],res[20];
	int testc=0;
	printf("enter the number of test cases:");
	scanf("%d",&testc);
	for(k=0;k<testc;k++)
	{
		printf("\n\n for testcase %d==\n\n",k+1);
		printf("enter the numbers of player:");
	scanf("%d",&n);
	printf("\nenter the goals repspect to th player:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&g[i]);
	}
	printf("\nenter the number of fouls respect to the player:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&f[i]);
	}
	printf("\ntotal points of player for testcase %d",k+1);
	j=0;
	for(i=0;i<n;i++)
	{
		res[j]=(g[i]*20)-(f[i]*10);
		if(res[j]<0)
	    res[j]=0;
		printf("\ntotal points of player %d is = %d",i+1,res[j]);
		j++; 
	}
	max=0;


	for(j=0;j<n;j++)
	{
		if(res[max]<res[j])
		{ 
		res[max]=res[j];
		}
	}
	printf("\nplayer %d have maximum points:%d",max+1,res[max]);
	
   }
}
