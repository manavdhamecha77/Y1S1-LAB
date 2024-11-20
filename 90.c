/*
90. WRITE A PROGRAM TO FIND LENGTH OF A GIVEN STRING INCLUDING AND EXCLUDING SPACES 
USING POINTERS.
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000];
    printf("Input string: ");
    if (fgets(str, sizeof(str), stdin)) 
    {
        int n = strlen(str);
        if (n > 0 && str[n-1] == '\n') str[n-1] = '\0';
    }
    //puts(str);

    char *pStr = str; 

    int count=0,scount=0;
    
    while((*pStr) != '\0')
    {
        if(*pStr == ' ')
        scount++;
        count ++;
        pStr++;
    }
    printf("\nLength of string with spaces is: %d",count);
    printf("\nLength of string without spaces is: %d",count-scount);



}

