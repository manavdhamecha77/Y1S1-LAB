//33. PROGRAM TO FINDOUT MAX AND MIN FROM ‘N’ NOS.

#include<stdio.h>

int main()
{
    int n,max,min; //Declaration

    printf("Enter how many numbers you want to input :"); //Input how many numbers to enter
    scanf("%d",&n);

    if(n<=2)
    {
        printf("Try entering more values for better comparison");
    }
    else{

        int num[n];
        printf("Enter number 1:"); //Entering the first number for reference for max & min
        scanf("%d",&num[0]);

        max=num[0];
        min=num[0]; //Gave both the variables value of num[0]


        for(int i=1;i<=n-1;i++)
        {
            printf("\nEnter number %d:",i+1); 
            scanf("%d",&num[i]);

            if(num[i]>max)  //If number entered is greater than before then max = number
            {
                max = num[i];
                
            }
            if(num[i]<min) // If number entered is less than max than min = number
            {
                min = num[i];
            }
        }

        //Printing the result
        printf("\nMaximum :%d",max);
        printf("\nMinumum: %d",min);
}
    return 0;
}