#include<stdio.h>
#include<string.h>

int main()
{
	int i, consonant=0,vowel=0;
	char str[60];
	printf("enter the string:");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
			if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
                {
           
                 if(str[i] =='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || 
                   str[i] =='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'  )
                   vowel++;
               else
                  consonant++;
               }
	}
	
    printf("Total number of vowel = %d\n", vowel);
    printf("Total number of consonant = %d\n", consonant);	 
    return 0;
	
}
