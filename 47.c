/*
47.
    A
    AB
    ABC
    ABCD
    ABCDE
*/

#include<stdio.h>
int main()
{
    for(int i=65;i<=90;i++)
    {
        for(int j=65;j<=i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}