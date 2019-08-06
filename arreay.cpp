
#include<stdio.h>
#include<conio.h>
 #define rs 4
 #define cs 3
int main()
{
	 int arr[rs][cs];
	 int i,j;
	 printf("please enter the elements of matrix %d,%d",rs,cs);
	 for(i=0;i<rs;i++)
	 {
	   for(  j=0;j<cs;j++)	
	   {
	   	scanf("%d",&arr[i][j]);	   
	   }
	 }
	 
	 for( i=0;i<cs;i++)
	 {
	 	for( j=0;j<rs;j++)
	 	{
	 		printf(" %d",arr[i][j]);
		 }
	 }
	 
	 return 0;
}
