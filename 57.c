//57. PROGRAM TO READ N NOS AND FINDOUT MAX AND SECOND MAX.

#include<stdio.h>

int main()
{
    int n,max,s_max; //Declaration

    //Input how many numbers to enter
    printf("Enter how many numbers you want to input :"); 
    scanf("%d",&n);

    //For user to enter more two nmbers
    if(n<=2)
    {
        printf("Try entering more values for better comparison");
    }

    
    else{

        int num[n];
        printf("Enter number 1:"); //Entering the first number for reference for max & s_max
        scanf("%d",&num[0]);

        max=num[0];
        s_max=num[0]; //Gave both the variables value of num[0]


        for(int i=1;i<=n-1;i++)
        {
            printf("\nEnter number %d:",i+1); 
            scanf("%d",&num[i]);

            if(num[i]>max)  //If number entered is greater than before then values of: num -> & max -> s_max
            {
                s_max = max;
                max = num[i];
                
            }
            if(num[i]<max && num[i]>s_max) // If number entered is less than max and greater than second max than values of: max ->max & num->s_max
            {
                s_max = num[i];
            }
            //If number entered is less than both max & s_max than nothing happens
        }

        //Printing the result
        printf("\nMax :%d",max);
        printf("\nSecond Max: %d",s_max);
}
    return 0;
}