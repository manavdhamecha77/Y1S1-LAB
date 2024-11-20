/*
97. WRITE A C PROGRAM TO COUNT THE NUMBER OF VOWELS IN A STRING USING POINTER.
*/

#include<stdio.h>
#include<string.h>


int vcount(int n,char *pStr)
{
    int vow = 0;
    for(int i=0;i<n;i++)
    {
        switch(*pStr)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':   vow ++;
        }
        pStr++;
    }
    return vow;
}

int main()
{
    char str[100];
    printf("Enter string: ");
    if(fgets(str,sizeof(str),stdin))
    {
        int n = strlen(str);
        if(n>0 && str[n-1] == '\n') str[n-1] == '\0';  
    }
    //puts(str);
    int n = strlen(str);
    char *pStr = NULL;
    pStr = str;

    printf("Number of vowels in the string is: %d",vcount(n,pStr));
}