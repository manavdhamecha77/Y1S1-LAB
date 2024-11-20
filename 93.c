/*
93. WRITE A C PROGRAM USING POINTER TO COUNT THE NUMBERS OF WORDS IN A GIVEN STRING.
*/
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int word_count(char *pStr)
{
    int inword = 0;
    int wcount = 0;
    
    while(*pStr != '\0')
    {
        if (!isspace(*pStr))  // Non-space character
        {
            if (inword == 0)  // We're starting a new word
            {
                inword = 1;  // Mark as inside a word
                wcount++;    // Increment the word count
            }
        }
        else
        {
            inword = 0;  // We are no longer inside a word (space encountered)
        }
        pStr++;  // Move to the next character
    }
    return wcount;
}


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
    
    printf("Numbers of words in string is: %d",word_count(pStr));
}
