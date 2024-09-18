//41. READ A NUMBER N AND PRINT FACTOR OF N. (EX28=1,2,4,7,14,28)
#include<stdio.h>
int main()
{
    int n,i; //Declaration

    // Initialization of all variables
    printf("Enter a number to get its factors:");
    scanf("%d",&n);

    printf("(%d's factors are: 1,",n); //Starting the factors with 1

    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
          printf("%d,",i);
    }

    printf("%d)",n); // Ending the factors with number itself
    return 0;
}
