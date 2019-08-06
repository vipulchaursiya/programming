# include<stdio.h>
# include<string.h>
#define allchar 256


int main()
{
	int i,k,j,length,strind,revind ,count=0;
	int   freq[allchar],ascii ;
	char reverse[60] ,str[60],r,t,y,u;
	printf("enter the string:");
	gets(str);
     
	for(i=0;i<allchar;i++)
	{
	  freq[i]=0;	
	}
     for(i=0;str[i]!='\0';++i)
     {
     	ascii=(int)str[i];
     	freq[ascii]++;
	 }
	 printf("%d",ascii);
	 freq[j]=0;
	 for(i=0;i<=allchar;i++)
	 {
	 	if(freq[i]>freq[j])
	 	{
	 		freq[j]=freq[i];
	 	     k=i;
		 }
	 }
	 
	 printf(" ..>  %c......%d",k,freq[j]);
	 
}
