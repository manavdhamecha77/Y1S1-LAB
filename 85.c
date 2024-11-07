//85. WRITE A FUNCTION TO READ CHARACTER AND CHECK WHETHER IT IS VOWEL OR NOT. 

#include<stdio.h>
#include<ctype.h>

int isvowel(char ch)
{
    int isvow = 0;
    switch(ch)
    {
        case 'A': isvow = 1;
                break;
        case 'E': isvow = 1;
                break;
        case 'I': isvow = 1;
                break;
        case 'O': isvow = 1;
                break;
        case 'U': isvow = 1;
            break;
        default: isvow = 0;
                break;
    }
    return isvow;
}

int main()
{
    char ch;
    printf("Enter any character:");
    scanf("%c",&ch);

    ch = toupper(ch);
    
    if(isvowel(ch))
        printf("You entered a vowel");
    else
        printf("You didn't entered a vowel");
}