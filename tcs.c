#include<stdio.h>
int main()
{
	int i,num,digit,odd=0,even=0,n;
	printf("enter the number :");
	scanf("%d",&num);
	n=num;
    while(n!=0) 
    {
    digit=n%10;
    n=n/10;
    if(digit%2==0)
      even++;
    else
	  odd++;  
	}
	printf("addition of odd digit:%d\n",odd);
	printf("addition of even digit:%d\n",even);
    printf("odd-even=%d",odd-even);	

} 
