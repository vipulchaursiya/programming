#include<stdio.h>

 int main()
 {
 	int i,j,n,k,ascii,min;
 	char str[100],c;
 	printf("enter the string:");
 	gets(str); 
 	while(str[i]!='\0')
	{i++;}
	n=i;
    for(i=0;i<n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if((str[i]==str[j])&&str[i]!=' ')  
			{
				for(k=j;k<=n;k++)
				{
					str[k]=str[k+1];
				}
				n--;			
			}
			
		 } 
	}
	puts(str);
}
