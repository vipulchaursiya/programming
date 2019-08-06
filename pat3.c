#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<6;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i>3)
			{
				if(j%2==1)
				  printf("1");
				else
				  printf("0");  
			}
			else if ((i>1) && (i<=3))
			 {
			     if (j%2==1)
			      printf("0");
			   else 
			      printf("1");
			 }
			 else 
			 printf("1");	     
		}
		printf("\n");
	}
}
