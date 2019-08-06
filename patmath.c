#include<stdio.h>

int main()
{
	int i,j,num;
	printf("enter the number:");
	scanf("%d",&num); 
     if(num<=6)
     {
     	i=13-num;
     	printf("%d",i);
	 }
	  else if((num<=12) && (num<=18))
     {
     	i=25-num;
     	printf("%d",i);
	 }
	  else //((num>=24) && (num<=30))
     {
     	i=61-num;
     	printf("%d",i);
	 }
	 
	 return 0;
}
