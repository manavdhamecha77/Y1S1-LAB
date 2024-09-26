/*
51.
    10000
    01000
    00100
    00010
    00001
*/

#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i-1;j++)
        {
            printf("0");
        }

        printf("1");
        
        for(int j=5;j>=i+1;j--)
        {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}