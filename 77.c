// 77. WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT.

#include<stdio.h>
#include<math.h>

int is_palindrome(int n)
{
    int i,q,orig_n,orig_n2,sum=0; //Declaration
    int count=0;
    orig_n = n; // Storing the value of n in orig_num to use it after looping

    while(n>=1)   // To count number of digits of number entered
    {
        n/=10;
        count++;
    }

    orig_n2 = orig_n; // Storing the value of orig_n in orig_num2 to use it after looping

    while(orig_n>0)  // To get the reversed number
    {
        q = orig_n%10;
        sum = sum + q*pow(10,count);
        orig_n/=10;
        count--;
    }

    //Printing the result
    if(orig_n2==sum/10)
        printf("The number %d is Palindrome!!",orig_n2);
    else
        printf("The number %d is NOT Palindrome!!",orig_n2);

    return 0;
}

int main(){
    int n; //Declaration

    // Initialization of all variables
    printf("Enter any number:");
    scanf("%d",&n);

    is_palindrome(n);

    return 0;
}