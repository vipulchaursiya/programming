#include<stdio.h>
#define MAX_CHARS 256

int main()
{
  int ascii,i,j,k ,min;
  char str[60];
  int freq[MAX_CHARS];
  printf("enter the stirng:");
  gets(str);
  i=0;
   while(str[i] != '\0')
    {
        ascii = (int)str[i];
        freq[ascii] += 1;

        i++;
    }
  min = 0;
    for(i=0; i<MAX_CHARS; i++)
    {
        if(freq[i] != 0)
        {
            if(freq[min] == 0 || freq[i] < freq[min])
                min = i;
        }
    }

  printf("%d",freq[min]);
  	
} 
