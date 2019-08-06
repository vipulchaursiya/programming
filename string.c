// C program to read strings 

#include<stdio.h> 

int main() 
{ 
	// declaring string 
	char str[50]; 
	int i;
	
	// reading string 
	
	scanf("%c",str); 
	for( i=0;str[i]!='\0';++i)
	// print string 
	printf("%c",str[i]);
	printf("%c",str[3]); 

	return 0; 
} 

