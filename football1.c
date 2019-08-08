#include<stdio.h>
#include<math.h>
#define maxinput 100
int main ()
{
	 long long int n ,i,j,k,max ,g[maxinput],f[maxinput],res[maxinput];
	 long long int testc=0;
	scanf("%lld",&testc);
	for(k=0;k<testc;k++)
	{
		
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&g[i]);
	}
		for(i=0;i<n;i++)
	{
		scanf("%lld",&f[i]);
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
	printf("\n%lld",res[max]);
	
   }
}
