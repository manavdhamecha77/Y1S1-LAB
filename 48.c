/*
48. 
        1
       12
      123
     1234
    12345
*/



#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>=i;j--)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}