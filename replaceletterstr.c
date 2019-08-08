#include<stdio.h>

 int main()
 {
 	int i,j,n,ascii,min;
 	char str[100],c,k;
 	printf("enter the string:");
 	gets(str);
 	printf("enter the word to replace:");
 	scanf("%c",&c);
 	getchar();
 	printf("\nenter the word to replace with:");
 	scanf("%c",&k);
 	while(str[i]!='\0')
	{i++;}
	n=i;
	for(i=0;i<n;i++)
	{
		if(str[i]==k)
		{
			str[i]=c;
		}
	}
	puts(str);
}
	
