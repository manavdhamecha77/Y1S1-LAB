/*
94. WRITE A PROGRAM TO COPY A STRING IN REVERSE ORDER TO ANOTHER STRING VARIABLE USING 
POINTERS.FOR EXAMPLE,
 ST =”SVNITJAVA” IS COPIED AS “AVAJTINVS”
*/

#include <stdio.h>
#include<string.h>

void copy_rev(int n,char *srcP, char *desP)
{
    srcP += n-1;
    for(int i=0;i<n;i++)
    {
        *desP = *srcP;
        desP++;
        srcP--;
    }
    *desP = '\0';
}

int main()
{
    char str1[100], str2[100];

    printf("Input string: ");
    if (fgets(str1, sizeof(str1), stdin)) 
    {
        int n = strlen(str1);
        if (n > 0 && str1[n-1] == '\n') str1[n-1] = '\0';
    }
    //puts(str);
    int num = strlen(str1);

    char *srcP = str1, *desP = str2;
    copy_rev(num,srcP, desP);

    puts(str2);
    
    return 0;
}