#include<stdio.h>
#include<math.h>
int main ()
{
	int n,i,j,k, max,g[n],f[n],res[20];
	int testc=0;
	printf("\n");
	scanf("%d",&testc);
	for(k=0;k<testc;k++)
	{
			printf("\n");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&g[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&f[i]);
	}
//	printf("\ntotal points of player for testcase %d",k+1);
	j=0;
	for(i=0;i<n;i++)
	{
		res[j]=(g[i]*20)-(f[i]*10);
		if(res[j]<0)
	    res[j]=0;
	//	printf("\ntotal points of player %d is = %d",i+1,res[j]);
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
	printf("\n%d",res[max]);
	
   }
}
