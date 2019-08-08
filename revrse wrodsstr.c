//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	int i,k,n,l,m,j,length,strind,revind ,count=0;
//	char reverse[100] ,str[200];
//	printf("enter the string:");
//	gets(str);
//	for(i=0;str[i]!='\0';i++)
//    { }
//    n=i-1; 
//    l=i-1;
//    i=0;
//    while(n>0)
//    { 
//    
//    	if(str[n]==' ')    	{  
//    	      	
//    	   i=n+1;
//    	   while(i<=l)
//    	   {
//    	   	reverse[j]=str[i];
//    	   	i++;    	
//			j++;  
//				   	
//		   }
//		   reverse[j++]= ' ';
//		   l=n-1;
//		}
//		n--;
//	}
//	 // Finally add the last word
//    for(i=0; i<=l; i++)
//    {
//        reverse[j] = str[i];
//        j++;
//    }
//    reverse[j]='\0';
//	puts(reverse);
//	
//}
#include<stdio.h>
int  main()
{
	int i,j,k,n;
	char str[100],reverse[100],start,end;
	printf("enter the string:");
	gets(str);
	while(str[i]!='\0')
	{i++;
	}
	n=i;
	start=n-1;
	end=n-1;
	i=0;
	int index=0;
	while(start>0)
	{
		if(str[start]==' ')
		{
			i=start+1;
			while(i<=end)
			{
				reverse[index]=str[i];
				i++;
				index++;
			}
			end=start-1;
			reverse[index++]=' ';
		}
		start--;
	}
//	printf("%d",end);
	
	for(i=0;i<=end;i++)
	{
		reverse[index]=str[i];
		index++;
	}
	reverse[index]='\0';
    puts(reverse);
	
}











