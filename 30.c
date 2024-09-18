//30. PROGRAM TO REVERSE OF A GIVEN NO.


#include<stdio.h>
#include<math.h>
int main(){
    int n,i,q,orig_n,orig_n2,sum=0; //Declaration
    int count=0;

    // Initialization of all variables
    printf("Enter any number:");
    scanf("%d",&n);
    orig_n = n; // Storing value of n in orig_num because value of n changes after looping

    while(n>=1) // To count number of digits of number entered
    {
        n/=10;
        count++;
    }

    orig_n2 = orig_n; // Storing value of orig_num in orig_num2 because its value changes after looping

    while(orig_n>0)  // To get the reversed number
    {
        q = orig_n%10;
        sum = sum + q*pow(10,count);
        orig_n/=10;
        count--;
    }
    printf("The reverse of number %d is %d",orig_n2,sum/10);
    return 0;
}