#include<stdio.h>
#include<string.h>

int main()
{
	int i,length,strind,revind ,count=0;
	char reverse[60] ,str[60];
	printf("enter the string:");
	gets(str);
	for(i=0;str[i]!='\0';i++)
    {} 
    length=i;
    strind=length-1;
    revind=0;
    while(strind>=0)
    {
    	reverse[revind]=str[strind];
    	revind++;
    	strind--;
   	}
   	reverse[revind]='\0';
  // 	puts(reverse);
  // 	puts(str);
   	for(i=0;str[i]!='\0';i++)
   	{
   	  if(str[i]==reverse[i])
		 {
		   printf(" palindrome");
		 }	
	 else
	   printf("not palindrome");
	   break;
	}
   	
//   	if(reverse == str)
//   	  printf("palindrome");
//   	else 
//	   printf("not"); 
//// 
	 
//    while(revind!=0)
//	{
//		
//	  if(reverse[revind]==str[revind])
//	  {
//	     if(revind=1)
//		 printf("palindrome");	 
//		 revind--;
//	
//	   }  
//	 else
//		  printf("not");
//		  break;	
//	}  
    return 0;
}
