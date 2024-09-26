/*
52.
       1
      121
     12321
    1234321
*/

#include<stdio.h>
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=4;j>=i;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("%d",k);
        }
        for(int l=1;l<=i-1;l++)
        {
            printf("%d",(i-l));
        }
        printf("\n");
    }
}