//31. PROGRAM TO PRINT SUM OF INDIVIDUAL DIGITS OF A ‘N’ DIGIT NO. 

#include<stdio.h>
int main(){
    int num,temp,orig_num,sum=0; //Declaration

    // Initialization of all variables
    printf("Enter the number:");
    scanf("%d",&num);

    orig_num = num; // Storing value of num in orig_num because value of num changes after looping
    while(num!=0)
    {
        temp = num%10;
        sum = sum + temp;
        num = num/10;
    }
    printf("The sum of the individual digits of %d is:%d",orig_num,sum);
    return 0;
}